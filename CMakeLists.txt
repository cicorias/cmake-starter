cmake_minimum_required(VERSION 3.0.0)
project(cmakestarter VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cmakestarter main.cpp)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
target_link_libraries(cmakestarter PRIVATE unofficial::sqlite3::sqlite3)

find_package(eclipse-paho-mqtt-c CONFIG REQUIRED)
target_link_libraries(cmakestarter PRIVATE eclipse-paho-mqtt-c::paho-mqtt3a-static eclipse-paho-mqtt-c::paho-mqtt3c-static eclipse-paho-mqtt-c::paho-mqtt3as-static eclipse-paho-mqtt-c::paho-mqtt3cs-static)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
