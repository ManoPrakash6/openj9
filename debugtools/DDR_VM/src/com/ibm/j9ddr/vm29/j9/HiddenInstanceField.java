/*******************************************************************************
 * Copyright (c) 2015, 2015 IBM Corp. and others
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
package com.ibm.j9ddr.vm29.j9;

import com.ibm.j9ddr.CorruptDataException;
import com.ibm.j9ddr.vm29.pointer.generated.J9HiddenInstanceFieldPointer;
import com.ibm.j9ddr.vm29.pointer.generated.J9ROMFieldShapePointer;
import com.ibm.j9ddr.vm29.pointer.helper.J9UTF8Helper;
import com.ibm.j9ddr.vm29.types.UDATA;

class HiddenInstanceField {
	private J9HiddenInstanceFieldPointer pointer;
	private J9ROMFieldShapePointer shape;
	private UDATA fieldOffset = new UDATA(0);

	public HiddenInstanceField(J9HiddenInstanceFieldPointer pointer) throws CorruptDataException {
		this.pointer = pointer;
		this.shape = pointer.shape();
	}

	public HiddenInstanceField(J9ROMFieldShapePointer shape) {
		this.pointer = null;
		this.shape = shape;
	}

	public J9ROMFieldShapePointer shape() throws CorruptDataException {
		return shape;
	}

	public String className() throws CorruptDataException {
		String className = null;
		if (pointer != null && !pointer.className().isNull()) {
			className = J9UTF8Helper.stringValue(pointer.className());
		}
		return className;
	}

	public UDATA fieldOffset() {
		return fieldOffset;
	}
	public void setFieldOffset(UDATA fieldOffset) throws CorruptDataException {
		this.fieldOffset = fieldOffset;
	}
}
