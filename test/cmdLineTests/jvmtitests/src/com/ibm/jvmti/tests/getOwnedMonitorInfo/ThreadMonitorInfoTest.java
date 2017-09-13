/*******************************************************************************
 * Copyright (c) 2001, 2017 IBM Corp. and others
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
package com.ibm.jvmti.tests.getOwnedMonitorInfo;

public class ThreadMonitorInfoTest extends Thread 
{
	
	Object monitorA = new Object();
	Object monitorB = new Object();
		
	native static boolean verifyMonitors(Thread t, Object monitorA, Object monitorB);
	
	private int monitorCount = 0;
	
	public ThreadMonitorInfoTest(int monitorCount)
	{
		this.monitorCount = monitorCount;
	}

	
	public void run()
	{	
		if (monitorCount == 1) {
			synchronized(monitorA) {
				verifyMonitors(this, monitorA, null);
			}
		} else if (monitorCount == 2) {
			synchronized(monitorA) {
				synchronized(monitorB) {
					verifyMonitors(this, monitorA, monitorB);
				}
			}			
		}
	}
}
