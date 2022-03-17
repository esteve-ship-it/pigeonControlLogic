cmake_minimum_required(VERSION 3.16)

project(mavlinkctrl VERSION 0.0.1 LANGUAGES C CXX)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)
#set(CMAKE_AUTOUIC ON)

#find_package(Qt5 COMPONENTS Widgets REQUIRED)

#qt5_wrap_cpp(MOC_SRCS src/mainwindow.h)
#qt5_wrap_ui(UI_HEADERS src/mainwindow.ui)

add_executable(mavlinkctrl src/main.cpp src/serial_port.cpp src/autopilot_interface.cpp ${MOC_SRCS} ${UI_HEADERS})
target_include_directories(mavlinkctrl PRIVATE ${CMAKE_SOURCE_DIR}/vendor/c_library_v2)

#target_link_libraries(mavlinkctrl )
#target_include_directories(mavlinkctrl PRIVATE )

