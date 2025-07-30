cmake_minimum_required(VERSION 3.16)

project(Infotecs-Intership LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Infotecs-Intership
    messagelibrary.h messagelibrary.cpp
    message.h message.cpp )

include(GNUInstallDirs)
install(TARGETS Infotecs-Intership
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
