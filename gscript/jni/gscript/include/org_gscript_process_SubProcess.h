/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_gscript_process_SubProcess */

#ifndef _Included_org_gscript_process_SubProcess
#define _Included_org_gscript_process_SubProcess
#ifdef __cplusplus
extern "C" {
#endif
#undef org_gscript_process_SubProcess_NULL_POINTER
#define org_gscript_process_SubProcess_NULL_POINTER 0LL
#undef org_gscript_process_SubProcess_SIGHUP
#define org_gscript_process_SubProcess_SIGHUP 1L
#undef org_gscript_process_SubProcess_SIGKILL
#define org_gscript_process_SubProcess_SIGKILL 9L
/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeCreate
 * Signature: (Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_gscript_process_SubProcess_nativeCreate
  (JNIEnv *, jclass, jstring, jobjectArray, jobjectArray);

/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeExecute
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_gscript_process_SubProcess_nativeExecute
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeWaitFor
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_gscript_process_SubProcess_nativeWaitFor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeSigKill
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_gscript_process_SubProcess_nativeSigKill
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeFileDescriptor
 * Signature: (J)Ljava/io/FileDescriptor;
 */
JNIEXPORT jobject JNICALL Java_org_gscript_process_SubProcess_nativeFileDescriptor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_gscript_process_SubProcess
 * Method:    nativeSetWindowSize
 * Signature: (JIIII)V
 */
JNIEXPORT void JNICALL Java_org_gscript_process_SubProcess_nativeResizeWindow
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif