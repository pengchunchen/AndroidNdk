//
// Created by Administrator on 2018/5/9.
//

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring


JNICALL
Java_com_ci123_ndk_MainActivity_stringFromJNI2(
        JNIEnv *env,
        jobject _this,
        jstring str) {
    const char *a = env->GetStringUTFChars(str,NULL);
    if(a == NULL)
    {
        return NULL;
    }
    char *b = "from C++";
    char *result = (char *) malloc(sizeof(char) * strlen(a) + sizeof(char) * strlen(b));
    strcpy(result, a);
    strcat(result, b);
    env->ReleaseStringUTFChars(str,a);
    return env->
            NewStringUTF(result);
}

