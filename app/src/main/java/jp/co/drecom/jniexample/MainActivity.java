package jp.co.drecom.jniexample;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;

public class MainActivity extends AppCompatActivity {
    static {
        System.loadLibrary("native");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Jni.native_initialize();
    }

    public void onClick(View v) {
        switch (v.getId()) {
            case R.id.btn_call_native:
                int nativeValue = Jni.native_javaCallNative(4);
                Log.d("java call native","the value comes from native is " + nativeValue );
                break;
            default:
                break;
        }
    }
}
