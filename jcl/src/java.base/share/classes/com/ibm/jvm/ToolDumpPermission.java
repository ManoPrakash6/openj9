/*[INCLUDE-IF Sidecar17]*/
package com.ibm.jvm;

/*******************************************************************************
 * Copyright (c) 2012, 2014 IBM Corp. and others
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

import java.security.BasicPermission;
/**
 * The permission class for allowing "tool" dump agents to be run or
 * configured via the com.ibm.jvm.Dump class.
 * Granting this permission should be considered equivalent to granting
 * permission to call java.lang.Runtime.exec(String)
 */
public class ToolDumpPermission extends BasicPermission {

	private static final long serialVersionUID = -1819639790350383056L;

	public ToolDumpPermission() {
		super("ToolDumpPermission"); //$NON-NLS-1$
	}
}
