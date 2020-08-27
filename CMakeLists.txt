cmake_minimum_required(VERSION 3.16)
project(CMakeQtExample CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(${CMAKE_BINARY_DIR})
set(CMAKE_CXX_STANDARD 20)

if (DEFINED ENV{QT_DIR})
    message(STATUS "QT CMAKE DIR....$ENV{QT_DIR}")
else()
    message(FATAL_ERROR "QT_DIR environment variable is unset. \n  ")
endif()

set(CMAKE_PREFIX_PATH $ENV{QT_DIR})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)


add_library(ui "")
include(${CMAKE_CURRENT_LIST_DIR}/ui/CMakeLists.txt)

add_executable(CMakeQtExample MACOSX_BUNDLE main.cpp )
target_link_libraries(CMakeQtExample Qt5::Core Qt5::Widgets ui)
