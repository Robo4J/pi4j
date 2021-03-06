/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_jni_WDT.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_jni_WDT */

#ifndef _Included_com_pi4j_jni_WDT
#define _Included_com_pi4j_jni_WDT
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_jni_WDT
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_open
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_pi4j_jni_WDT
 * Method:    close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_WDT
 * Method:    disable
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_disable
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_WDT
 * Method:    getTimeOut
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_getTimeOut
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_WDT
 * Method:    setTimeOut
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_setTimeOut
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_jni_WDT
 * Method:    ping
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_WDT_ping
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
