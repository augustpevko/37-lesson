cmake_minimum_required(VERSION 3.0.0)
project(1-task VERSION 0.1.0)

set(SOURCES main.cpp calculatorMainWindow.cpp calculator.ui)
set(HEADERS ${MY_INCLUDE_DIR}/calculatorMainWindow.h)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "/home/pavel/Qt/5.15.2/gcc_64/lib/cmake")

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(1-task ${SOURCES} ${HEADERS})

target_link_libraries(1-task Qt5::Core Qt5::Gui Qt5::Widgets)
target_include_directories(1-task PUBLIC ${MY_INCLUDE_DIR})