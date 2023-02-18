# Building

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