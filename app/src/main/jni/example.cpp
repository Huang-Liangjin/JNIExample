//
// Created by huang liangjin on 2016/02/29.
//

#include "example.h"
#include <cstdio>
#include "jp_co_drecom_jniexample_Jni.h"

#define CLASS_NAME "jp/co/drecom/jniexample/Jni"


//bool Example::getStaticMethodInfo(JNIEnv** env, jclass& jniClass, jmethodID& jniMethodId,
//        const char* methodName, const char* signature) {
//    if (Example::m_jvm) {
//        jint result = m_jvm->GetEnv((void **) env, JNI_VERSION_1_4);
//        if (result == JNI_EDETACHED) {
//            if (m_jvm->AttachCurrentThread(env, NULL) > 0) {
//                result = JNI_OK;
//            }
//        }
//        if (result == JNI_OK) {
//            //return NULL if fail
//            jniClass = (*env)->FindClass(CLASS_NAME);
//            if (jniClass) {
//                //return NULL if fail
//                jniMethodId = (*env)->GetStaticMethodID(jniClass, methodName, signature);
//                if (jniMethodId) {
//                    return true;
//                } else {
//                    return false;
//                }
//            } else {
//                return false;
//            }
//        } else {
//            return false;
//        }
//    } else {
//        return false;
//    }
//}


JNIEXPORT void JNICALL Java_jp_co_drecom_jniexample_Jni_native_1initialize
(JNIEnv *env, jclass jclazz) {
//    int status = (env)->GetJavaVM(&Example::m_jvm);
//    if (status != 0) {
//        Example::m_jvm = NULL;
//    }
}

JNIEXPORT jint JNICALL Java_jp_co_drecom_jniexample_Jni_native_1javaCallNative
(JNIEnv *env, jclass jclazz, jint jvalue) {
    printf("the value comes from Java is %d", jvalue);
    jmethodID jmethodID1 = env->GetStaticMethodID(jclazz, "nativeCallJava", "(I)V");
    if (jmethodID1) {
        env->CallStaticVoidMethod(jclazz, jmethodID1, (int)jvalue);
    }
    return 9;
}

