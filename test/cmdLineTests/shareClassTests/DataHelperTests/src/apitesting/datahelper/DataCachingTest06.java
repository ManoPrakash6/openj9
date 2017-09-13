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
package apitesting.datahelper;

import java.io.InputStream;

import CustomClassloaders.DataCachingClassLoader;

/**
 * Stale marking - store two pieces of data for the same token, check we see the latter.
 */
public class DataCachingTest06 extends DataCachingTestbase {

	public static void main(String[] args) {
		new DataCachingTest06().run();
	}

	public void run() {
		log("working with stale entries");
		DataCachingClassLoader classLoader = getDataCachingLoader(CLASSPATH_JARONE);
		InputStream dataStream = null;
		
		log("make sure the resource we are testing is not in the cache already");
		dataStream = classLoader.findInCache(FILEONE);
		if (dataStream!=null) fail("'"+FILEONE+"' should not already be in the cache");

		log("load the resource, it should get cached");
		classLoader.storeInCache = true;
		dataStream = classLoader.getResourceAsStream(FILEONE);
		readAndCheck(dataStream,CONTENTS_JARONE_FILEONE);
		
		log("forcing a second store for the same token with different contents");
		classLoader.forceStore(FILEONE,"fake  contents");

		log("look in the cache for it");
		dataStream = classLoader.findInCache(FILEONE);
		readAndCheck(dataStream,"fake  contents");	

		log("test successful");
	}
}
