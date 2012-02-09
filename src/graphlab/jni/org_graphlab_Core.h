/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_graphlab_Core */

#ifndef _Included_org_graphlab_Core
#define _Included_org_graphlab_Core
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_graphlab_Core
 * Method:    createCore
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_graphlab_Core_createCore__
  (JNIEnv *, jobject);

/*
 * Class:     org_graphlab_Core
 * Method:    createCore
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_graphlab_Core_createCore__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_graphlab_Core
 * Method:    destroyCore
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_destroyCore
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_graphlab_Core
 * Method:    resizeGraph
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_resizeGraph
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_graphlab_Core
 * Method:    addVertex
 * Signature: (JLorg/graphlab/data/Vertex;)I
 */
JNIEXPORT jint JNICALL Java_org_graphlab_Core_addVertex
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     org_graphlab_Core
 * Method:    addEdge
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_addEdge
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_graphlab_Core
 * Method:    schedule
 * Signature: (JLorg/graphlab/Updater;I)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_schedule
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     org_graphlab_Core
 * Method:    scheduleAll
 * Signature: (JLorg/graphlab/Updater;)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_scheduleAll
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     org_graphlab_Core
 * Method:    start
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_graphlab_Core_start
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_graphlab_Core
 * Method:    lastUpdateCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_graphlab_Core_lastUpdateCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_graphlab_Core
 * Method:    addGlobalConst
 * Signature: (JLjava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_addGlobalConst
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     org_graphlab_Core
 * Method:    getGlobal
 * Signature: (JLjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_graphlab_Core_getGlobal
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_graphlab_Core
 * Method:    setNCpus
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_setNCpus
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_graphlab_Core
 * Method:    setSchedulerType
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_setSchedulerType
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_graphlab_Core
 * Method:    setScopeType
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_graphlab_Core_setScopeType
  (JNIEnv *, jobject, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
