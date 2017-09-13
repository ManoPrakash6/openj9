/*******************************************************************************
 * Copyright (c) 1991, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/

#include "CheckEngine.hpp"
#include "CheckVMClassSlots.hpp"
#include "ModronTypes.hpp"
#include "ScanFormatter.hpp"

GC_Check *
GC_CheckVMClassSlots::newInstance(J9JavaVM *javaVM, GC_CheckEngine *engine)
{
	MM_Forge *forge = MM_GCExtensions::getExtensions(javaVM)->getForge();
	
	GC_CheckVMClassSlots *check = (GC_CheckVMClassSlots *) forge->allocate(sizeof(GC_CheckVMClassSlots), MM_AllocationCategory::DIAGNOSTIC, J9_GET_CALLSITE());
	if(check) {
		new(check) GC_CheckVMClassSlots(javaVM, engine);
	}
	return check;
}

void
GC_CheckVMClassSlots::kill()
{
	MM_Forge *forge = MM_GCExtensions::getExtensions(_javaVM)->getForge();
	forge->free(this);
}

void
GC_CheckVMClassSlots::check()
{
	GC_VMClassSlotIterator classSlotIterator(_javaVM);
	J9Class **slotPtr;

	while((slotPtr = classSlotIterator.nextSlot()) != NULL) {
		J9Class *theClazz = *slotPtr;
		if (theClazz != NULL) {
			if (_engine->checkJ9ClassPointer(_javaVM, theClazz) != J9MODRON_GCCHK_RC_OK) {
				return;
			}
		}
	}
}

void
GC_CheckVMClassSlots::print()
{
	GC_VMClassSlotIterator classSlotIterator(_javaVM);
	J9Class **slotPtr;

	GC_ScanFormatter formatter(_portLibrary, "VMClass Slot");
	while((slotPtr = classSlotIterator.nextSlot()) != NULL) {
		formatter.entry((void *)*slotPtr);
	}
	formatter.end("VMClass Slot");
}

