cmake_minimum_required(VERSION 3.0.0)
project(cmakestarter VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(cmakestarter main.cpp)
add_executable(cmakestartercpp cmakestarter.cpp)
# set_property(TARGET cmakestartercpp PROPERTY CXX_STANDARD 98)

find_package(unofficial-sqlite3 CONFIG REQUIRED)
target_link_libraries(cmakestarter PRIVATE unofficial::sqlite3::sqlite3)

find_package(eclipse-paho-mqtt-c CONFIG REQUIRED)
target_link_libraries(cmakestarter PRIVATE eclipse-paho-mqtt-c::paho-mqtt3a-static eclipse-paho-mqtt-c::paho-mqtt3c-static eclipse-paho-mqtt-c::paho-mqtt3as-static eclipse-paho-mqtt-c::paho-mqtt3cs-static)

# target_link_libraries(cmakestartercpp PRIVATE eclipse-paho-mqtt-c::paho-mqtt3a-static eclipse-paho-mqtt-c::paho-mqtt3c-static eclipse-paho-mqtt-c::paho-mqtt3as-static eclipse-paho-mqtt-c::paho-mqtt3cs-static)
find_package(mosquitto REQUIRED)
target_include_directories(cmakestartercpp PRIVATE ${MOSQUITTO_INCLUDE_DIRS})
target_link_libraries(cmakestartercpp PRIVATE ${MOSQUITTO_LIBRARIES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
