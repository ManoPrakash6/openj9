/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
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
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_Math_cos() {
      int i=0, groupNum=34,numTests=132;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x7ff80000, 0x00000000,
         0x7ff00000, 0x00000000,
         0xfff00000, 0x00000000,
         0x0, 0x0,
         0x80000000, 0x00000000,
         0x3fd58139, 0xf95ac4e8,
         0x3fd4d753, 0xca24770c,
         0x3fe1f1b5, 0xe2ee80f8,
         0x3fe49c30, 0xb7f0c2cd,
         0x3fe7d46b, 0xb0e4050c,
         0x3fc0e1f1, 0x09547674,
         0x3fd1a461, 0xa53076c8,
         0x3fe6d154, 0x187c4bbf,
         0x3fe7ba16, 0xf9d650c2,
         0x3fe8ff6c, 0x11a7fd62,
         0x3fda4581, 0x212ad2cc,
         0x3fd48eb0, 0xe8c22c3c,
         0x3fde27bd, 0x7edbf5f0,
         0x3fc04b98, 0xdca6b9ac,
         0x3fe1d234, 0x547f8161,
         0x3fe3af12, 0x8232e8e3,
         0x3fe8cf7c, 0xf31f38d8,
         0x3fe87105, 0x3cd8f2bf,
         0x3f932ffb, 0x96cf3360,
         0x3fb378cd, 0x50af46e8,
         0x3ff921f0, 0xd7e968a9,
         0xc01921fb, 0x54442d18,
         0x3ff921fb, 0x54442d1b,
         0xffefffff, 0xffffffff,
         0xffeccccc, 0xcccccccc,
         0xffe99999, 0x99999999,
         0xffe66666, 0x66666666,
         0xffe33333, 0x33333333,
         0xffe00000, 0x00000000,
         0xffd99999, 0x9999999a,
         0xffd33333, 0x33333334,
         0xffc99999, 0x9999999c,
         0xffb99999, 0x9999999f,
         0xfc980000, 0x00000000,
         0x7fb99999, 0x99999993,
         0x7fc99999, 0x99999996,
         0x7fd33333, 0x33333331,
         0x7fd99999, 0x99999997,
         0x7fdfffff, 0xfffffffd,
         0x7fe33333, 0x33333332,
         0x7fe66666, 0x66666665,
         0x7fe99999, 0x99999998,
         0x7feccccc, 0xcccccccb,
         0x7fefffff, 0xfffffffe,
         0xc32fc000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x0, 0x2,
         0x0, 0x9,
         0x40000, 0x00000000,
         0x80000, 0x00000000,
         0xfffff, 0xfffffffe,
         0xfffff, 0xffffffff,
         0x80000000, 0x00000002,
         0x80000000, 0x00000009,
         0x80040000, 0x00000000,
         0x80080000, 0x00000000,
         0x800fffff, 0xfffffffe,
         0x800fffff, 0xffffffff,
         0x408fb4e1, 0x47ae149b,
         0x4090961e, 0xb851eb95,
         0xc0863000, 0x00000000,
         0xc08627eb, 0x851eb852,
         0x4051ef5c, 0x28f5c132,
         0x3ff0a2b2, 0x3def12b7,
         0x3ff0a2b2, 0x3e33cae7,
         0x3ff0a2b2, 0x3f8b63d7,
         0xbfefffff, 0xffffffff,
         0x3fefffff, 0xfffffff0,
         0x3fefffff, 0xffffffff,
         0x3fefffff, 0xfffffe14,
         0xc0152c38, 0xc4e8043a,
         0xc014e48a, 0xb06d22f4,
         0xc014da4d, 0x3fc94bea,
         0xc010d00f, 0xcf2574f8,
         0xc0014e34, 0x192c3200,
         0x40124ea8, 0x82c60fb8,
         0x401258e5, 0xf369e6c2,
         0x4014e842, 0x1c5fa942,
         0xbff80d0c, 0x0962a17e,
         0xbff03601, 0xcbf1fda5,
         0x3ff111ac, 0x4888e3a9,
         0x3ff911ac, 0x4888e3ab,
         0x3fefced9, 0x1687291c,
         0x3fefe76c, 0x8b439398,
         0x3feff3b6, 0x45a1c8d6,
         0x3feff7ce, 0xd9168540,
         0xc014eec8, 0x2110f9fe,
         0x400d7e98, 0xb3a09a7b,
         0xc00295e2, 0x2da71340,
         0x3ffff2f3, 0xf69d5e8e,
         0x401058e5, 0xf369e6ce,
         0xc00e8167, 0x4c5f64e4,
         0x3fc6978d, 0x4fdf3b6a,
         0x3fd126e9, 0x78d4fdf8,
         0x3fd2978d, 0x4fdf3b69,
         0x3fd6a7ef, 0x9db22d14,
         0x3fd7c6a7, 0xef9db233,
         0x3fd7df3b, 0x645a1cb2,
         0x3fd820c4, 0x9ba5e35a,
         0x3fd98106, 0x24dd2f21,
         0x3fdbdf3b, 0x645a1cb3,
         0x3fdc20c4, 0x9ba5e35b,
         0x3fdc28f5, 0xc28f5c30,
         0x3fdcbc6a, 0x7ef9db2a,
         0x3fdf645a, 0x1cac0839,
         0x3fe00831, 0x26e978d8,
         0x3fe01cac, 0x083126ea,
         0x3fe0b439, 0x5810623c,
         0x3fe0bc6a, 0x7ef9db10,
         0x3fe1ba5e, 0x353f7cbc,
         0x3fe1c6a7, 0xef9db1fa,
         0x3fe1d2f1, 0xa9fbe738,
         0x3fe1d70a, 0x3d70a3a2,
         0x3fe21cac, 0x083126ac,
         0x3fe29ba5, 0xe353f782,
         0x3fe33f7c, 0xed916812,
         0x3fe38d4f, 0xdf3b63f0,
         0x3fe39168, 0x72b0205a,
         0x3fe39999, 0x9999992e,
         0x3fe40c49, 0xba5e34c6,
         0x3fe4e147, 0xae147a4e,
         0x3fe5ef9d, 0xb22d0da2,
         0x3fe651eb, 0x851eb792,
         0x3fe676c8, 0xb439574c,
         0x3fe81062, 0x4dd2f0b4,
         0x3fe84189, 0x374bc5ac,
         0x3feac083, 0x126e9644,
         0x0, 0x0};
      unsigned int result [] = {
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3fee35e0, 0xf4b55e22,
         0x3fee5178, 0xf065f97e,
         0x3feb196c, 0x6ff072f5,
         0x3fe996d2, 0x488f93f4,
         0x3fe7879d, 0x9963bbe4,
         0x3fefb8d9, 0x0b2a9ffe,
         0x3feecab8, 0xc00adf4f,
         0x3fe8342b, 0x90f4e4fc,
         0x3fe7996e, 0x0e513a09,
         0x3fe6b901, 0x24bd062f,
         0x3fed5772, 0x128b9e61,
         0x3fee5d03, 0xd163d5da,
         0x3fec835c, 0x6c486212,
         0x3fefbdb4, 0x9504a2be,
         0x3feb2a20, 0xc45f1206,
         0x3fea226f, 0x7dbe9899,
         0x3fe6daa7, 0xe90d2494,
         0x3fe71c63, 0x59a77858,
         0x3feffe8f, 0xda6b327f,
         0x3fefe850, 0x74e6a04f,
         0x3ee4f8b5, 0x88dd0ce3,
         0x3ff00000, 0x00000000,
         0xbcc5cb3b, 0x399d747f,
         0xbfefffe6, 0x2ecfab75,
         0x3fe75f41, 0x752c793c,
         0xbfb26501, 0xcc4f4b13,
         0xbfe3ff70, 0x0993c32e,
         0x3fefa57b, 0xdf3b0f0e,
         0xbfea719f, 0x26c232be,
         0x3fcca42f, 0x239b6d74,
         0x3fdfdf31, 0x928d6af3,
         0xbfee8beb, 0xb3b7f6b2,
         0xbfe4530e, 0xde10f077,
         0xbfbba08e, 0x22038be8,
         0x3fdd1844, 0x4457902e,
         0x3febca06, 0x58cd0708,
         0xbfd33878, 0x098d10e2,
         0xbfdb5f2e, 0x7479d432,
         0x3fedb1cf, 0x920df86b,
         0xbfcd4290, 0x8438f5f2,
         0xbfdf9898, 0x3042cf30,
         0x3fee7fb6, 0x8dcfa7ca,
         0xbfecf5a6, 0x113d9dce,
         0x3fd7ffdf, 0xb4c53090,
         0x3fd29616, 0x2def6e19,
         0xbfefffe6, 0x2ecfab75,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbfefc0aa, 0xc510014c,
         0x3fee4a6f, 0x8d99e3ab,
         0x3fefffff, 0xff063930,
         0x3fe1056b, 0xd7a48fb1,
         0xbfebd2d8, 0xf8269e40,
         0x3fe034ed, 0xcdd8cead,
         0x3fe034ed, 0xcd624c7f,
         0x3fe034ed, 0xcb11c19a,
         0x3fe14a28, 0x0fb5068c,
         0x3fe14a28, 0x0fb50699,
         0x3fe14a28, 0x0fb5068c,
         0x3fe14a28, 0x0fb5082a,
         0x3fe18ede, 0x09db088b,
         0x3fdf49ae, 0x20e12eda,
         0x3fdeba5a, 0xf96c7878,
         0xbfdf32e8, 0x21ba51a5,
         0xbfe1ddf5, 0x5b6082fa,
         0xbfc14ce6, 0xd059235a,
         0xbfc00803, 0x2dcabb25,
         0x3fdf7d80, 0x3dae986e,
         0x3fb14b94, 0xa9f94002,
         0x3fe0eee2, 0x3a526324,
         0x3fdee818, 0x44084bd9,
         0x3f704f08, 0xe8548708,
         0x3fe1736f, 0xc1ec49f3,
         0x3fe15ed1, 0x083bd0b0,
         0x3fe1547d, 0xd310618e,
         0x3fe1510c, 0x2fe3ff44,
         0x3fdfd834, 0x3c886a7d,
         0xbfeb5c42, 0x76679031,
         0xbfe5de49, 0xcebf2ba3,
         0xbfda72a9, 0x28eec7b5,
         0xbfe2bcee, 0x697ad940,
         0xbfe90cf4, 0xf9711550,
         0x3fef80bb, 0x35eb18c0,
         0x3feedb90, 0xc5c2370d,
         0x3feea8c2, 0xf75873d8,
         0x3fee040b, 0x2d038764,
         0x3fedd12c, 0x6a1c4143,
         0x3fedccb4, 0x46587de6,
         0x3fedc0b3, 0xc29a6649,
         0x3fed7e1b, 0xbc8255ed,
         0x3fed035a, 0x3453c121,
         0x3fecf578, 0x27196de0,
         0x3fecf3b9, 0xc29100ce,
         0x3fecd405, 0xafa3d6de,
         0x3fec3a24, 0x669b8b61,
         0x3fec1139, 0xad332b23,
         0x3fec075d, 0xc2b923fa,
         0x3febbd05, 0x060058ed,
         0x3febb8ee, 0x719660d2,
         0x3feb36b2, 0x98d1049d,
         0x3feb3039, 0xa52e8c9f,
         0x3feb29bc, 0xaf386d5b,
         0x3feb2792, 0x23fe1c84,
         0x3feb027a, 0xf053b99e,
         0x3feabd8f, 0x6981c186,
         0x3fea6234, 0x13c9aaf2,
         0x3fea35dc, 0x3b033b8d,
         0x3fea3382, 0x762b1770,
         0x3fea2ecd, 0xa2d4aca2,
         0x3fe9ec36, 0x7560f8fc,
         0x3fe96d1a, 0x98c057da,
         0x3fe8c572, 0xd84032e4,
         0x3fe886c2, 0xdcdfd9ea,
         0x3fe86f05, 0x125e09b1,
         0x3fe75ed0, 0xb5215bd1,
         0x3fe73d21, 0xcb2058fa,
         0x3fe57436, 0x4df7c168,
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_Math_cos(*(p0));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if (HIWORD(&r) != HIWORD(erp) || abs(LOWORD(&r) - LOWORD(erp)) > 1) {
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_Math_cos", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }

