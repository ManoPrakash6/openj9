/*[INCLUDE-IF Sidecar18-SE]*/
/*******************************************************************************
 * Copyright (c) 2006, 2017 IBM Corp. and others
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
package com.ibm.dtfj.corereaders.zos.mvs;

import javax.imageio.stream.ImageInputStream;
import java.io.IOException;

/* This class was generated automatically by com.ibm.dtfj.corereaders.zos.util.Xml2Java */

public final class Ihartm2aTemplate {

    public static int length() {
        return 1744;
    }

    public static long getRtm2ereg(ImageInputStream inputStream, long address) throws IOException {
        inputStream.seek(address + 60);
        throw new Error("request for long value for field rtm2ereg which has length of 64");
    }
    public static int getRtm2ereg$offset() {
        return 60;
    }
    public static int getRtm2ereg$length() {
        return 512;
    }
    public static long getRtm2apsw(ImageInputStream inputStream, long address) throws IOException {
        inputStream.seek(address + 124);
        throw new Error("request for long value for field rtm2apsw which has length of 16");
    }
    public static int getRtm2apsw$offset() {
        return 124;
    }
    public static int getRtm2apsw$length() {
        return 128;
    }
}
