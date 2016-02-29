//
// Created by huang liangjin on 2016/02/29.
//

#ifndef JNIEXAMPLE_EXAMPLE_H
#define JNIEXAMPLE_EXAMPLE_H

#include <jni.h>

class Example {
public:
    static JavaVM* m_jvm;
    static bool getStaticMethodInfo(JNIEnv** env, jclass& jniClass, jmethodID& jniMethodId,
    const char* methodName, const char* signature);
};

#endif //JNIEXAMPLE_EXAMPLE_H
