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
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ibm_j9ddr_corereaders_debugger_JniRegisters */

#ifndef _Included_com_ibm_j9ddr_corereaders_debugger_JniRegisters
#define _Included_com_ibm_j9ddr_corereaders_debugger_JniRegisters
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ibm_j9ddr_corereaders_debugger_JniRegisters
 * Method:    getNumberRegisters
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_j9ddr_corereaders_debugger_JniRegisters_getNumberRegisters
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ibm_j9ddr_corereaders_debugger_JniRegisters
 * Method:    getRegisterName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ibm_j9ddr_corereaders_debugger_JniRegisters_getRegisterName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ibm_j9ddr_corereaders_debugger_JniRegisters
 * Method:    getRegisterValue
 * Signature: (JJ)Ljava/lang/Number;
 */
JNIEXPORT jobject JNICALL Java_com_ibm_j9ddr_corereaders_debugger_JniRegisters_getRegisterValue
  (JNIEnv *, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL
Java_com_ibm_j9ddr_corereaders_debugger_JniRegisters_fetchRegisters(JNIEnv * env, jobject obj, jlong tid);

#ifdef __cplusplus
}
#endif
#endif
