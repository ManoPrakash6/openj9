package com.ibm.j9.offload.tests.invcost;

/*******************************************************************************
 * Copyright (c) 2008, 2012 IBM Corp. and others
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

import com.ibm.j9.offload.tests.invcost.TestNativesInv;


public class InvocationCost {
	
	static int iterations = 10000000;
	static int ARRAY_LENGTH = 1000;

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long starttime, endtime;
/*		
		TestNativesInv natives = new TestNativesInv();
		
		starttime = System.nanoTime();
		int count = 0;
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothingInJava();
		}
		endtime = System.nanoTime();
		System.out.println(count + ":Time in Java 1 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothingInJava2(natives,natives);
		}
		endtime = System.nanoTime();
		System.out.println(count + ":Time in Java 2 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothingInJava3(natives,natives,natives,natives,natives);
		}
		endtime = System.nanoTime();
		System.out.println(count + ":Time in Java 3 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothing();
		}
		endtime = System.nanoTime();
		System.out.println(count + ":Time in native 1 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothing2(natives,natives);
		}
		endtime = System.nanoTime();
		System.out.println(count + ":Time in native 2 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations*10;i++){
			count = count + natives.doNothing3(natives,natives,natives,natives,natives);
		}
		endtime = System.nanoTime();
		System.out.println(count + "Time in native 3 = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		natives.doCallback();
		endtime = System.nanoTime();
		System.out.println("Callback time= " +  ((endtime - starttime)/1000000));
		
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations;i++){
			natives.sumValues(1,2,3,4,5,6);
		}
		endtime = System.nanoTime();
		System.out.println("Time in sumValues = " +  ((endtime - starttime)/1000000));
		
		starttime = System.nanoTime();
		natives.suma=1;
		natives.sumb=2;
		natives.sumc=3;
		natives.sumd=4;
		natives.sume=5;
		natives.sumf=6;
		for(int i=0;i<iterations;i++){
			natives.sumValues2();
		}
		endtime = System.nanoTime();
		System.out.println("Time in sumValues2 = " +  ((endtime - starttime)/1000000));

	

		long[] theArray = new long[ARRAY_LENGTH];
		for (int i=0;i<ARRAY_LENGTH;i++){
			theArray[i] = i;
		}
		
		starttime = System.nanoTime();
		for(int i=0;i<iterations;i++){
			TestNativesInv.getElement(theArray,10);
		}
		endtime = System.nanoTime();
		System.out.println("Time in getElement = " +  ((endtime - starttime)/1000000));

		
		starttime = System.nanoTime();
		for(int i=0;i<iterations;i++){
			TestNativesInv.getElement2(theArray,10);
		}
		endtime = System.nanoTime();
		System.out.println("Time in getElement2 = " +  ((endtime - starttime)/1000000));
*/
	}

}
