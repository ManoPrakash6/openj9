/*******************************************************************************
 * Copyright (c) 2001, 2014 IBM Corp. and others
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
package com.ibm.j9ddr.view.dtfj.comparators;

import com.ibm.dtfj.java.JavaClass;
import com.ibm.dtfj.java.JavaClassLoader;
import com.ibm.j9ddr.view.dtfj.test.DTFJComparator;

public class JavaClassLoaderComparator extends DTFJComparator {

	public static final int CACHED_CLASSES = 1;
	public static final int DEFINED_CLASSES = 2;
	public static final int OBJECT = 4;
	
	// getCachedClasses()
	// getDefinedClasses()
	// getObject()
	
	public void testEquals(Object ddrObject, Object jextractObject, int members) {
		JavaClassLoader ddrJavaClassLoader = (JavaClassLoader) ddrObject;
		JavaClassLoader jextractClassLoader = (JavaClassLoader) jextractObject;
		
		JavaClassComparator javaClassComparator = new JavaClassComparator();
		
		// getCachedClasses()
		if ((CACHED_CLASSES & members) != 0)
			javaClassComparator.testComparatorIteratorEquals(ddrJavaClassLoader, jextractClassLoader, "getCachedClasses", JavaClass.class);
		
		// getDefinedClasses()
		if ((DEFINED_CLASSES & members) != 0)
			javaClassComparator.testComparatorIteratorEquals(ddrJavaClassLoader, jextractClassLoader, "getDefinedClasses", JavaClass.class);
		
		// getObject()
		if ((OBJECT & members) != 0)
			new JavaObjectComparator().testComparatorEquals(ddrJavaClassLoader, jextractClassLoader, "getObject");
	}

	// FIXME: Maybe Remove when getDefinedClasses() and getCachedClasses are fixed.
	public int getDefaultMask() {
		return OBJECT;
	}
}
