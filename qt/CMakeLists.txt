cmake_minimum_required(VERSION 3.27)
project(pq2qt)

set(
        SOURCE_FILES
        pq2qt.cpp
        pq2qt.hpp
        qtmainmenu.cpp
        qtmainmenu.hpp
        qtcharatercreator.cpp
        qtcharatercreator.hpp
        qtgamescreen.cpp
        qtgamescreen.hpp
)

find_package(Qt5 REQUIRED Core Widgets)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(pq2qt SHARED ${SOURCE_FILES} resources.qrc)

target_link_libraries(pq2qt pq2gui pq2game pq2utils Qt5::Core Qt5::Widgets)
include_directories(../gui ../game ../utils)
