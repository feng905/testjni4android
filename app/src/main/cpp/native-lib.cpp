#include <jni.h>
#include <string>

extern "C"{
#include "j4a_base.h"
#include "CallBack/NotifyEvent.h"

}

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_feng_testjni4android_CallBack_NotifyEvent_stringFromJNI(
        JNIEnv *env,
        jobject thiz) {


    // 注册、反射
    J4A_LoadAll__catchAll(env);

    // 使用，c调java
    // 注意 jobject 对象对应java对象NotifyEvent
    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__withCString(env,thiz,100,"hello jni...");
    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg__withCString(env,thiz,200,"world jni...");

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
