# Building

```
git submodule update --init
./vcpkg/bootstrap-vcpkg.sh
./vcpkg/vcpkg install paho-mqtt


```

```
cd build
cmake -B . -S .. -DCMAKE_TOOLCHAIN_FILE=../vcpkg/scripts/buildsystems/vcpkg.cmake

cmake -B ./build -S . -DCMAKE_TOOLCHAIN_FILE=/Users/cicorias/g/learn/cpp/cmake-starter/vcpkg/scripts/buildsystems/vcpkg.cmake
```


```
➜  cmake-starter git:(main) ✗ ./vcpkg/vcpkg list
mosquitto:arm64-osx                               2.0.14              Mosquitto is an open source message broker that ...
openssl:arm64-osx                                 3.0.8               OpenSSL is an open source project that provides ...
paho-mqtt:arm64-osx                               1.3.10              Paho project provides open-source client impleme...
sqlite3:arm64-osx                                 3.40.1#1            SQLite is a software library that implements a s...
```

```
c-ares:x64-linux                                  1.18.1#1            A C library for asynchronous DNS requests
libuv:x64-linux                                   1.44.2              libuv is a multi-platform support library with a...
libwebsockets:x64-linux                           4.3.2               Libwebsockets is a lightweight pure C library bu...
mosquitto:x64-linux                               2.0.14              Mosquitto is an open source message broker that ...
openssl:x64-linux                                 3.0.8               OpenSSL is an open source project that provides ...
paho-mqtt:x64-linux                               1.3.10              Paho project provides open-source client impleme...
pthreads:x64-linux                                3.0.0#13            Meta-package that provides PThreads4W on Windows...
uthash:x64-linux                                  2.3.0               C macros for hash tables and more.
vcpkg-cmake-config:x64-linux                      2022-02-06#1        
vcpkg-cmake:x64-linux                             2022-12-22          
zlib:x64-linux                                    1.2.13              A compression library
```