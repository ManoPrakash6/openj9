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
package jit.test.jitt.array;

import org.testng.annotations.Test;
import org.testng.log4testng.Logger;
import org.testng.Assert;

@Test(groups = { "level.sanity","component.jit" })
public class intArrayLoadStore extends jit.test.jitt.Test {
private static Logger logger = Logger.getLogger(intArrayLoadStore.class);
static int initArry[]= {0,1,-32768,32767};
private boolean tstCheck(int arrayP[]){
int len = arrayP.length;
for (int i=0;i<len;i++) {;
  if (arrayP[i] != initArry[i]){
     logger.error("\ncheck Failed at index " + i + " leftValue =" + (int)arrayP[i] + " rightValue =" + (int)initArry[i]);
     return false;
    } 
 }
return true;
}

private int[] tstFoo(int[] arrayP,int zero) {
    int len = arrayP.length;
	int arryLocal[] = new int [len];
	for (int i=0;i<len;i++) {;
	  arryLocal[i] = arrayP[i]; 
	  }
	 if (!tstCheck(arryLocal)){
	  Assert.fail("char Array value bad in tstFoo");
	 }
	return arryLocal;
}

@Test
public void testintArrayLoadStore() {
int zero = 0;

		int ArryReturn[];    
		for (int j = 0; j < sJitThreshold+1; j++) {
			ArryReturn = tstFoo(initArry,0);
			if (!tstCheck(ArryReturn)){
	         Assert.fail("char Array value bad in interpreted");
			}
	    }
}
}
