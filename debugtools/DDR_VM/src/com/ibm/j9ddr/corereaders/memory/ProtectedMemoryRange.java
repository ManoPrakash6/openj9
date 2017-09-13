/*******************************************************************************
 * Copyright (c) 2009, 2014 IBM Corp. and others
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
package com.ibm.j9ddr.corereaders.memory;

/**
 * Abstract memory range that adds the isReadable/Executable/Writable methods
 * 
 * @author andhall
 *
 */
public abstract class ProtectedMemoryRange extends BaseMemoryRange
{
	protected boolean executable = true;
	protected boolean shared = false;
	protected boolean readOnly = false;
	
	
	protected ProtectedMemoryRange(long baseAddress, long size)
	{
		super(baseAddress, size);
	}
	
	public boolean isExecutable() {
		return executable;
	}

	public boolean isReadOnly() {
		return readOnly;
	}

	public boolean isShared() {
		return shared;
	}
}
