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
package com.ibm.j9ddr.corereaders.elf;

abstract class Address
{
	private long _value;

	Address(long value)
	{
		_value = value;
	}

	long getValue()
	{
		return _value;
	}

	abstract Address add(long offset);

	boolean isNil()
	{
		return 0L == getValue();
	}

	abstract Number asNumber();

	abstract Address nil();
}

class Address32 extends Address
{
	Address32(int value)
	{
		super(value & 0xffffffffL);
	}

	Address add(long offset)
	{
		long result = getValue() + offset;
		return new Address32((int) result);
	}

	Number asNumber()
	{
		return Integer.valueOf((int)getValue());
	}

	Address nil()
	{
		return new Address32(0);
	}
}

class Address64 extends Address
{
	Address64(long value)
	{
		super(value);
	}

	Address add(long offset)
	{
		return new Address64(getValue() + offset);
	}

	Number asNumber()
	{
		return Long.valueOf(getValue());
	}

	Address nil()
	{
		return new Address64(0);
	}
}
