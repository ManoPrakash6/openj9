/*******************************************************************************
 * Copyright (c) 2014, 2014 IBM Corp. and others
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

#ifndef LANGUAGETHREADLOCALHEAP_HPP_
#define LANGUAGETHREADLOCALHEAP_HPP_

#include "omr.h"

typedef J9ModronThreadLocalHeap LanguageThreadLocalHeapStruct;

class MM_LanguageThreadLocalHeap {

public:
	LanguageThreadLocalHeapStruct* getLanguageThreadLocalHeapStruct(MM_EnvironmentBase* env, bool zeroTLH)
	{
#if defined(J9VM_GC_NON_ZERO_TLH)
		if (!zeroTLH) {
			return &static_cast<J9VMThread*>(env->getLanguageVMThread())->nonZeroAllocateThreadLocalHeap;
		}
#endif /* defined(J9VM_GC_NON_ZERO_TLH) */
		return &static_cast<J9VMThread*>(env->getLanguageVMThread())->allocateThreadLocalHeap;
	}

	U_8 ** getPointerToHeapAlloc(MM_EnvironmentBase* env, bool zeroTLH) {
#if defined(J9VM_GC_NON_ZERO_TLH)
		if (!zeroTLH) {
			return &static_cast<J9VMThread*>(env->getLanguageVMThread())->nonZeroHeapAlloc;
		}
#endif /* defined(J9VM_GC_NON_ZERO_TLH) */
		return &static_cast<J9VMThread*>(env->getLanguageVMThread())->heapAlloc;
	}

	U_8 ** getPointerToHeapTop(MM_EnvironmentBase* env, bool zeroTLH) {
#if defined(J9VM_GC_NON_ZERO_TLH)
		if (!zeroTLH) {
			return &static_cast<J9VMThread*>(env->getLanguageVMThread())->nonZeroHeapTop;
		}
#endif /* defined(J9VM_GC_NON_ZERO_TLH) */
		return &static_cast<J9VMThread*>(env->getLanguageVMThread())->heapTop;
	}

	IDATA * getPointerToTlhPrefetchFTA(MM_EnvironmentBase* env, bool zeroTLH) {
#if defined(J9VM_GC_NON_ZERO_TLH)
		if (!zeroTLH) {
			return &static_cast<J9VMThread*>(env->getLanguageVMThread())->nonZeroTlhPrefetchFTA;
		}
#endif /* defined(J9VM_GC_NON_ZERO_TLH) */
		return &static_cast<J9VMThread*>(env->getLanguageVMThread())->tlhPrefetchFTA;
	}
};

#endif /* LANGUAGETHREADLOCALHEAP_HPP_ */
