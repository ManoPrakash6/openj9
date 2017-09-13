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

#if !defined(CYCLESTATEVLHGC_HPP_)
#define CYCLESTATEVLHGC_HPP_

#include "CycleState.hpp"

#include "VLHGCIncrementStats.hpp"
#include "VLHGCCycleStats.hpp"

class MM_CycleState;

/**
 * Per cycle state information
 */
class MM_CycleStateVLHGC : public MM_CycleState {
public:
	MM_VLHGCIncrementStats _vlhgcIncrementStats; /**< Stats for the various phases / operations within an increment */
	MM_VLHGCCycleStats _vlhgcCycleStats; /**< Stats for the various phases / operations within a cycle */

	MM_CycleStateVLHGC()
		: MM_CycleState()
		, _vlhgcIncrementStats()
		, _vlhgcCycleStats()
	{
	}
};

#endif /* CYCLESTATEVLHGC_HPP_ */
