LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := HelloJniTest
LOCAL_SRC_FILES := com_tg_hz_hellojni_jni_JniClient.c
include $(BUILD_SHARED_LIBRARY)