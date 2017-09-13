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
package org.openj9.test.unsafe;

import org.testng.annotations.Test;
import org.testng.log4testng.Logger;

@Test(groups = { "level.sanity" })
public class TestUnsafePutGetAddress extends UnsafeTestBase {
	
	private static Logger logger = Logger.getLogger(TestUnsafePutGetAddress.class);
	
	public TestUnsafePutGetAddress(String scenario) {
		super(scenario);
	}
	
	/* get logger to use, for child classes to report with their class name instead of UnsafeTestBase*/
	protected Logger getLogger() {
		return logger;
	}
	
	public void testIntLong() throws Exception {
		int addressSize = myUnsafe.addressSize();
		logger.debug("addressSize: " + addressSize);
		if(addressSize > 4){
			testLongNative(ADDRESS);
		}else{
			testIntNative(ADDRESS);
		}
	}
}
