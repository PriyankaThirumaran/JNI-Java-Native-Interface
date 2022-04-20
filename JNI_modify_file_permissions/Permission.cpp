#include <sys/types.h>
#include <sys/stat.h>
#include <jni.h>
#include "Permission.h"
#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

JNIEXPORT void JNICALL Java_Permission_modifyPermission(JNIEnv *env, jobject obj, jstring path){
	const char *nativePath = env->GetStringUTFChars(path, 0);
	chmod(nativePath, S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH);
	std::cout<<"Modify Permissions from C++";
	env->ReleaseStringUTFChars(path, nativePath);
}