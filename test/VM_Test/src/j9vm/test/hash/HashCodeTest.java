/*******************************************************************************
 * Copyright (c) 2001, 2012 IBM Corp. and others
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
/*
 * Created on Jul 9, 2007
 *
 * To change the template for this generated file go to
 * Window>Preferences>Java>Code Generation>Code and Comments
 */
package j9vm.test.hash;

public class HashCodeTest extends HashCodeTestParent {

	public HashCodeTest(int mode) {
		super(mode);
	}


	static class ZeroSlots {
		
	}

	static class OneSlot extends ZeroSlots {
		int slot1;
	}

	static class TwoSlots extends OneSlot {
		int slot2;
	}

	static class ThreeSlots extends TwoSlots {
		int slot3;
	}

	static class FourSlots extends ThreeSlots {
		int slot4;
	}

	
	public static void main(String[] args) {
		for (int i = 0; i < MODES.length; i++) {
			new HashCodeTest(MODES[i]).test();	
		}
	}

	
	public void test() {
		/* test that an object's hash code remains stable during a GC */
		Object[] objects = {
				new ZeroSlots(),
				new OneSlot(),
				new TwoSlots(),
				new ThreeSlots(),
				new FourSlots(),
		};
		
		int[] hashCodes = new int[objects.length];
		for (int i = 0; i < objects.length; i++) {
			hashCodes[i] = objects[i].hashCode();
		}
		
		gc();
		
		for (int i = 0; i < objects.length; i++) {
			int newHashCode = objects[i].hashCode();
			if (hashCodes[i] != newHashCode) {
				throw new Error("Hash code for " + objects[i] + " changed: " + hashCodes[i] + " != " + newHashCode);
			}
		}
	}
	
}
