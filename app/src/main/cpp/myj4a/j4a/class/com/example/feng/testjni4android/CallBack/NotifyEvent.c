/*
 * Copyright (C) 2015 Zhang Rui <bbcallen@gmail.com>
 *
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
 */

/*
 * https://github.com/Bilibili/jni4android
 * This file is automatically generated by jni4android, do not modify.
 */

#include "NotifyEvent.h"

typedef struct J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent {
    jclass id;

    jmethodID method_postEvent;
    jmethodID method_postMsg;
} J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent;
static J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent;

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent(JNIEnv *env, jobject thiz, jint type, jstring msg)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postEvent, type, msg);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__catchAll(JNIEnv *env, jobject thiz, jint type, jstring msg)
{
    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent(env, thiz, type, msg);
    J4A_ExceptionCheck__catchAll(env);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__withCString(JNIEnv *env, jobject thiz, jint type, const char *msg_cstr__)
{
    jstring msg = NULL;

    msg = (*env)->NewStringUTF(env, msg_cstr__);
    if (J4A_ExceptionCheck__throwAny(env) || !msg)
        goto fail;

    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent(env, thiz, type, msg);

fail:
    J4A_DeleteLocalRef__p(env, &msg);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__withCString__catchAll(JNIEnv *env, jobject thiz, jint type, const char *msg_cstr__)
{
    jstring msg = NULL;

    msg = (*env)->NewStringUTF(env, msg_cstr__);
    if (J4A_ExceptionCheck__catchAll(env) || !msg)
        goto fail;

    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postEvent__catchAll(env, thiz, type, msg);

fail:
    J4A_DeleteLocalRef__p(env, &msg);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg(JNIEnv *env, jobject thiz, jint type, jstring msg)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postMsg, type, msg);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg__catchAll(JNIEnv *env, jobject thiz, jint type, jstring msg)
{
    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg(env, thiz, type, msg);
    J4A_ExceptionCheck__catchAll(env);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg__withCString(JNIEnv *env, jobject thiz, jint type, const char *msg_cstr__)
{
    jstring msg = NULL;

    msg = (*env)->NewStringUTF(env, msg_cstr__);
    if (J4A_ExceptionCheck__throwAny(env) || !msg)
        goto fail;

    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg(env, thiz, type, msg);

fail:
    J4A_DeleteLocalRef__p(env, &msg);
}

void J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg__withCString__catchAll(JNIEnv *env, jobject thiz, jint type, const char *msg_cstr__)
{
    jstring msg = NULL;

    msg = (*env)->NewStringUTF(env, msg_cstr__);
    if (J4A_ExceptionCheck__catchAll(env) || !msg)
        goto fail;

    J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent__postMsg__catchAll(env, thiz, type, msg);

fail:
    J4A_DeleteLocalRef__p(env, &msg);
}

int J4A_loadClass__J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent(JNIEnv *env)
{
    int         ret                   = -1;
    const char *J4A_UNUSED(name)      = NULL;
    const char *J4A_UNUSED(sign)      = NULL;
    jclass      J4A_UNUSED(class_id)  = NULL;
    int         J4A_UNUSED(api_level) = 0;

    if (class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.id != NULL)
        return 0;

    sign = "com/example/feng/testjni4android/CallBack/NotifyEvent";
    class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.id = J4A_FindClass__asGlobalRef__catchAll(env, sign);
    if (class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.id == NULL)
        goto fail;

    class_id = class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.id;
    name     = "postEvent";
    sign     = "(ILjava/lang/String;)V";
    class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postEvent = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postEvent == NULL)
        goto fail;

    class_id = class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.id;
    name     = "postMsg";
    sign     = "(ILjava/lang/String;)V";
    class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postMsg = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_com_example_feng_testjni4android_CallBack_NotifyEvent.method_postMsg == NULL)
        goto fail;

    J4A_ALOGD("J4ALoader: OK: '%s' loaded\n", "com.example.feng.testjni4android.CallBack.NotifyEvent");
    ret = 0;
fail:
    return ret;
}
