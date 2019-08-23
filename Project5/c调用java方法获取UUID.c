#include "ndk1_Simple5.h"
JNIEXPORT void JNICALL Java_ndk1_Simple5_callGetUuid
(JNIEnv * env, jclass clazz) {
	jmethodID	methodId =(*env)->GetStaticMethodID(env, clazz, "getUuid", "()Ljava/lang/String;");
	jstring j_str=(*env)->CallStaticObjectMethod(env, clazz, methodId);
	char* str=(*env)->GetStringUTFChars(env, j_str, NULL);

	//»ØÊÕ×Ö·û´®
	//Ç©Ãû (IF)Ljava/awt/Point;   [Ljava/lang/String; 
	(*env)->ReleaseStringUTFChars(env,j_str,str);
	printf("str=%s", str);
}