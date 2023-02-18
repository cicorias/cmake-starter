# Building

```
cd build
cmake -B . -S .. -DCMAKE_TOOLCHAIN_FILE=../vcpkg/scripts/buildsystems/vcpkg.cmake

cmake -B ./build -S . -DCMAKE_TOOLCHAIN_FILE=/Users/cicorias/g/learn/cpp/cmake-starter/vcpkg/scripts/buildsystems/vcpkg.cmake
```