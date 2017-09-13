/*[INCLUDE-IF Sidecar18-SE]*/
/*******************************************************************************
 * Copyright (c) 1991, 2017 IBM Corp. and others
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
package com.ibm.dtfj.corereaders.j9;

/**
 * A J9RAS fragment contains the VM version specific offsets which are
 * required to successfully parse a J9RAS structure.
 * 
 * @author Adam Pilkington
 *
 */
public interface J9RASFragment {
	/**
	 * Indicates if the current thread data is present in the J9RAS structure
	 * @return true if it is supported
	 */
	public boolean currentThreadSupported();
	
	/**
	 * The ID of the thread which caused the core file generation
	 * @return thread ID
	 */
	public long getTID();
	
	/**
	 * The ID of the process which caused the core file generation
	 * @return
	 */
	public long getPID();
	
}
