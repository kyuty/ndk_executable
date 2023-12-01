#include <iostream>


#if defined(ANDROID)    // ANDROID
#include <android/log.h>
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "123123", __VA_ARGS__)
#else                   // ANDROID
#define LOGE(...)
#endif                  // ANDROID


int main() {
    // terminal 输出
    std::cout << "Hello, World form std::cout" << std::endl;
    // adb logcat 输出
    LOGE("Hello, World form android/log.h");
    return 0;
}
