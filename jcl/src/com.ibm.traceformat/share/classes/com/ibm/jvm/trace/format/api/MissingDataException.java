/*[INCLUDE-IF Sidecar18-SE]*/
/*******************************************************************************
 * Copyright (c) 2000, 2016 IBM Corp. and others
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
package com.ibm.jvm.trace.format.api;

import java.util.NoSuchElementException;

public class MissingDataException extends NoSuchElementException {
	private static final long serialVersionUID = -4039099038257572406L;
	long missingByteCount;
	TraceThread thread;

	public MissingDataException(TraceThread thread, long missingByteCount) {
		super(missingByteCount + " bytes were lost for thread " + thread);

		this.missingByteCount = missingByteCount;
		this.thread = thread;
	}

	public long getMissingBytes() {
		return missingByteCount;
	}

	public TraceThread getThread() {
		return thread;
	}
}
