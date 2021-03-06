/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_GpioInterrupt.h
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
/* Header for class com_pi4j_wiringpi_GpioInterrupt */

#ifndef _Included_com_pi4j_wiringpi_GpioInterrupt
#define _Included_com_pi4j_wiringpi_GpioInterrupt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_wiringpi_GpioInterrupt
 * Method:    enablePinStateChangeCallback
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_GpioInterrupt_enablePinStateChangeCallback
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_GpioInterrupt
 * Method:    disablePinStateChangeCallback
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_GpioInterrupt_disablePinStateChangeCallback
  (JNIEnv *, jclass, jint);


/*
 * Class:     com_pi4j_wiringpi_GpioInterrupt
 * Method:    GpioInterrupt_JNI_OnLoad
 */
jint GpioInterrupt_JNI_OnLoad(JavaVM *jvm);

/*
 * Class:     com_pi4j_wiringpi_GpioInterrupt
 * Method:    GpioInterrupt_JNI_OnUnload
 */
void GpioInterrupt_JNI_OnUnload(JavaVM *jvm);

/*
 * GPIO JVM instance to perform callbacks on
 */
JavaVM *gpio_callback_jvm;

#ifdef __cplusplus
}
#endif
#endif
