/*******************************************************************************
 * Copyright (c) 2001, 2014 IBM Corp. and others
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

#include "fastJNI.h"

#include "j9protos.h"
#include "j9consts.h"

extern "C" {

/* java.lang.String: public native String intern(); */
j9object_t JNICALL
Fast_java_lang_String_intern(J9VMThread *currentThread, j9object_t stringObject)
{
	/* This call sets an exception on failure */
	return currentThread->javaVM->memoryManagerFunctions->j9gc_internString(currentThread, stringObject);
}

J9_FAST_JNI_METHOD_TABLE(java_lang_String)
	J9_FAST_JNI_METHOD("intern", "()Ljava/lang/String;", Fast_java_lang_String_intern,
		J9_FAST_JNI_RETAIN_VM_ACCESS | J9_FAST_JNI_DO_NOT_WRAP_OBJECTS)
J9_FAST_JNI_METHOD_TABLE_END

}
