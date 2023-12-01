cmake_minimum_required(VERSION 3.20)
project(ndk_test)

## 设置CMake的系统名称为Android
#set(CMAKE_SYSTEM_NAME Android)
#set(CMAKE_ANDROID_API_MIN android-21)
#set(CMAKE_ANDROID_API android-30)
#
#set(ANDROID_NDK /Users/wangdong/Library/Android/sdk/ndk/21.3.6528147)

set(CMAKE_CXX_STANDARD 17)

## 设置Android ABI
#set(ANDROID_ABI "arm64-v8a")
#
## 设置Android工具链为Clang
#set(ANDROID_TOOLCHAIN "clang")
#
## 设置Android平台
#set(ANDROID_PLATFORM "android-26")
#
## 设置Android STL
#set(ANDROID_STL "c++_static")
#
#set(CMAKE_TOOLCHAIN_FILE ${ANDROID_NDK}/build/cmake/android.toolchain.cmake)
#message("123123 ${CMAKE_TOOLCHAIN_FILE}")

add_executable(ndk_test main.cpp)

target_link_libraries(ndk_test EGL GLESv2 GLESv3 android jnigraphics log binder_ndk)

