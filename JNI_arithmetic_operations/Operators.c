#include <jni.h>
#include "Operations.h"
#include <stdio.h>
#include <cstring>

JNIEXPORT jint JNICALL JNICALL Java_Operations_arithmeticOperations(JNIEnv *env, jobject obj, jstring operation, jint a, jint b)
{
	printf("Operations are performed in C\n");
	int c;
	const char *nativeOperation = env->GetStringUTFChars(operation, 0);
	if (strcmp(nativeOperation, "add") == 0) 
	{
		c = a + b;
	} 
	else if (strcmp(nativeOperation, "sub") == 0)
	{
		c = a - b;
	}
	else if (strcmp(nativeOperation, "mul") == 0)
	{
		c = a * b;
	}
	else if (strcmp(nativeOperation, "div") == 0)
	{
		c = a / b;
	}
	else
	{
		c = 0;
	}
	
	env->ReleaseStringUTFChars(operation, nativeOperation);
	
	return c;
}