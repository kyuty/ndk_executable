# build env

```
-DCMAKE_SYSTEM_NAME=Android -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_SYSTEM_VERSION=24 -DANDROID_PLATFORM=android-29 -DANDROID_ABI=arm64-v8a -DCMAKE_ANDROID_ARCH_ABI=arm64-v8a -DANDROID_NDK=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393 -DCMAKE_ANDROID_NDK=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393 -DCMAKE_TOOLCHAIN_FILE=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393/build/cmake/android.toolchain.cmake -DCMAKE_MAKE_PROGRAM=/Users/wangdong/Library/Android/sdk/cmake/3.22.1/bin/ninja -DCMAKE_CXX_FLAGS=-std=c++17 -DCMAKE_BUILD_TYPE=Debug -GNinja
```

C++ build system [configure] failed while executing:
```
/Users/wangdong/Library/Android/sdk/cmake/3.22.1/bin/cmake \
-H/Users/wangdong/github/android/jni/5_AndroidJniDemo/app/src/main/cpp \
-DCMAKE_SYSTEM_NAME=Android \
-DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
-DCMAKE_SYSTEM_VERSION=24 \
-DANDROID_PLATFORM=android-29 \
-DANDROID_ABI=arm64-v8a \
-DCMAKE_ANDROID_ARCH_ABI=arm64-v8a \
-DANDROID_NDK=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393 \
-DCMAKE_ANDROID_NDK=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393 \
-DCMAKE_TOOLCHAIN_FILE=/Users/wangdong/Library/Android/sdk/ndk/25.1.8937393/build/cmake/android.toolchain.cmake \
-DCMAKE_MAKE_PROGRAM=/Users/wangdong/Library/Android/sdk/cmake/3.22.1/bin/ninja \
-DCMAKE_CXX_FLAGS=-std=c++17 \
-DCMAKE_LIBRARY_OUTPUT_DIRECTORY=/Users/wangdong/github/android/jni/5_AndroidJniDemo/app/build/intermediates/cxx/Debug/62445o3d/obj/arm64-v8a \
-DCMAKE_RUNTIME_OUTPUT_DIRECTORY=/Users/wangdong/github/android/jni/5_AndroidJniDemo/app/build/intermediates/cxx/Debug/62445o3d/obj/arm64-v8a \
-DCMAKE_BUILD_TYPE=Debug \
-B/Users/wangdong/github/android/jni/5_AndroidJniDemo/app/.cxx/Debug/62445o3d/arm64-v8a \
-GNinja
```

# android_platform

- cat ~/Library/Android/sdk/ndk/25.1.8937393/meta/system_libs.json
  - "libbinder_ndk.so": "29"
  - android-29 才能 link binder_ndk
