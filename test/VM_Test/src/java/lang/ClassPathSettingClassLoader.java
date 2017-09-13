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
package java.lang;

import j9vm.test.classunloading.FinalizationIndicator;

public class ClassPathSettingClassLoader extends ClassLoader {
	
		FinalizationIndicator finalizationIndicator;
		
public ClassPathSettingClassLoader(String name, String classPath) {
	finalizationIndicator = new FinalizationIndicator(name);
	com.ibm.oti.vm.VM.setClassPathImpl(this, classPath);
}
protected Class findClass (String className) throws ClassNotFoundException {
	Class newClass = VMAccess.findClassOrNull(className, this);
	if (newClass == null) throw new ClassNotFoundException(className);
	return newClass;
}
}
