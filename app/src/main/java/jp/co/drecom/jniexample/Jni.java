package jp.co.drecom.jniexample;

import android.util.Log;

/**
 * Created by huang_liangjin on 2016/02/29.
 */
public class Jni {
    // to generate a C header file:
    // 1. use javac Jni.java to generate class file first
    // 2. use javah -classpath xxx jp.co.drecom.jniexample.Jni to generate the c header file.
    public static native int native_javaCallNative(int value);

    public static native void native_initialize();

    public static void nativeCallJava(int value) {
        Log.d("native call java", "the value comes from java is " + value);
    }
}
