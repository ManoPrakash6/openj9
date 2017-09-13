/*******************************************************************************
 * Copyright (c) 1991, 2014 IBM Corp. and others
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

#include "jvmtiHelpers.h"
#include "jvmti_internal.h"
#include "j2sever.h"
#include "classloadersearch.h"

jvmtiError JNICALL
jvmtiAddToBootstrapClassLoaderSearch(jvmtiEnv* env,
	const char* segment)
{
	J9JavaVM * vm = JAVAVM_FROM_ENV(env);
	J9JVMTIData * jvmtiData = J9JVMTI_DATA_FROM_VM(vm);
	jvmtiError rc;

	Trc_JVMTI_jvmtiAddToBootstrapClassLoaderSearch_Entry(env);

	ENSURE_PHASE_ONLOAD_OR_LIVE(env);

	ENSURE_NON_NULL(segment);

	/* Verify that segment is well-formed? */

	if (jvmtiData->phase == JVMTI_PHASE_ONLOAD) {
		rc = (jvmtiError) vm->internalVMFunctions->addToBootstrapClassLoaderSearch(vm, segment, CLS_TYPE_ADD_TO_SYSTEM_PROPERTY, FALSE);
	} else {
		rc = (jvmtiError) vm->internalVMFunctions->addToBootstrapClassLoaderSearch(vm, segment, CLS_TYPE_ADD_TO_SYSTEM_CLASSLOADER, TRUE);
	}

done:
	TRACE_JVMTI_RETURN(jvmtiAddToBootstrapClassLoaderSearch);
}


jvmtiError JNICALL
jvmtiAddToSystemClassLoaderSearch(jvmtiEnv* env,
	const char* segment)
{
	J9JavaVM * vm = JAVAVM_FROM_ENV(env);
	J9JVMTIData * jvmtiData = J9JVMTI_DATA_FROM_VM(vm);
	jvmtiError rc;

	Trc_JVMTI_jvmtiAddToSystemClassLoaderSearch_Entry(env);

	ENSURE_PHASE_ONLOAD_OR_LIVE(env);

	ENSURE_NON_NULL(segment);

	/* Verify that segment is well-formed? */

	if (jvmtiData->phase == JVMTI_PHASE_ONLOAD) {
		rc = (jvmtiError) vm->internalVMFunctions->addToSystemClassLoaderSearch(vm, segment, CLS_TYPE_ADD_TO_SYSTEM_PROPERTY, FALSE);
	} else {
		rc = (jvmtiError) vm->internalVMFunctions->addToSystemClassLoaderSearch(vm, segment, CLS_TYPE_ADD_TO_SYSTEM_CLASSLOADER, TRUE);
	}

done:
	TRACE_JVMTI_RETURN(jvmtiAddToSystemClassLoaderSearch);
}
