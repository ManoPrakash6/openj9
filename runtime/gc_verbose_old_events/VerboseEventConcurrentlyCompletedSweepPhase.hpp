
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

#if !defined(EVENT_CONCURRENTLY_COMPLETED_SWEEP_PHASE_HPP_)
#define EVENT_CONCURRENTLY_COMPLETED_SWEEP_PHASE_HPP_

#include "j9.h"
#include "j9cfg.h"
#include "mmhook.h"

#include "VerboseEvent.hpp"

/**
 * Stores the data relating to the concurrent completion of the sweep phase.
 * @ingroup GC_verbose_events
 */
class MM_VerboseEventConcurrentlyCompletedSweepPhase : public MM_VerboseEvent
{
private:
	/* Passed Data */
	U_64 _timeElapsed;  /**< Time elapsed during phase */
	UDATA _bytesSwept;  /**< Total heap bytes processed during phase */
	
	I_64 _timeInMilliSeconds;
	
	void initialize(void);
	
public:
	static MM_VerboseEvent *newInstance(MM_ConcurrentlyCompletedSweepPhase *event, J9HookInterface** hookInterface);
	
	virtual void consumeEvents();
	virtual void formattedOutput(MM_VerboseOutputAgent *agent);

	MMINLINE virtual bool definesOutputRoutine() { return true; };
	MMINLINE virtual bool endsEventChain() { return true; };
	
	MM_VerboseEventConcurrentlyCompletedSweepPhase(MM_ConcurrentlyCompletedSweepPhase *event, J9HookInterface** hookInterface) :
		MM_VerboseEvent(event->currentThread, event->timestamp, event->eventid, hookInterface),
		_timeElapsed(event->timeElapsed),
		_bytesSwept(event->bytesSwept)
	{}
};

#endif /* EVENT_CONCURRENTLY_COMPLETED_SWEEP_PHASE_HPP_ */

