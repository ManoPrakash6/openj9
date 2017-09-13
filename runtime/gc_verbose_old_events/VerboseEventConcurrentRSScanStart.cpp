
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
 
#include "VerboseEventConcurrentRSScanStart.hpp"

/**
 * Create an new instance of a MM_VerboseEventConcurrentRSScanStart event.
 * @param event Pointer to a structure containing the data passed over the hookInterface
 */
MM_VerboseEvent *
MM_VerboseEventConcurrentRSScanStart::newInstance(MM_ConcurrentRememberedSetScanStartEvent *event, J9HookInterface** hookInterface)
{
	MM_VerboseEventConcurrentRSScanStart *eventObject;
	
	eventObject = (MM_VerboseEventConcurrentRSScanStart *)MM_VerboseEvent::create(event->currentThread, sizeof(MM_VerboseEventConcurrentRSScanStart));
	if(NULL != eventObject) {
		new(eventObject) MM_VerboseEventConcurrentRSScanStart(event, hookInterface);
	}
	return eventObject;
}

/**
 * Populate events data fields.
 * The event calls the event stream requesting the address of events it is interested in.
 * When an address is returned it populates itself with the data.
 */
void
MM_VerboseEventConcurrentRSScanStart::consumeEvents(void)
{
}

/**
 * Passes a format string and data to the output routine defined in the passed output agent.
 * @param agent Pointer to an output agent.
 */
void
MM_VerboseEventConcurrentRSScanStart::formattedOutput(MM_VerboseOutputAgent *agent)
{
}
