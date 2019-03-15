package com.example.feng.testjni4android.CallBack;

import android.util.Log;

public class NotifyEvent {

    static {
        System.loadLibrary("native-lib");
    }

    private static String TAG = "NotifyEvent";
    private void postEvent(int type,String msg){

        Log.e(TAG,"NotifyEvent::postEvent id:"+type);
    }

    private void postMsg(int type,String msg){
        Log.e(TAG,"NotifyEvent::postMsg   id:"+type);
    }


    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}
