#include <android/window.h>
#include <android_native_app_glue.h>
#include <android/native_window.h>

void* CAPG_GetNativeWindow() {
  return (void*)Android_JNI_GetNativeWindow();
}
