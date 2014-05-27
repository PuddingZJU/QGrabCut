cmake_minimum_required(VERSION 2.8.11)

project(QGrabCut)
# Find the library
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5GUI REQUIRED)
FIND_PACKAGE(OpenCV  REQUIRED) 
# Find includes
set(CMAKE_INCLUDE_CURRENT_DIR ON)
INCLUDE_DIRECTORIES(gmm)
INCLUDE_DIRECTORIES(grabcut)
INCLUDE_DIRECTORIES(maxflow)
INCLUDE_DIRECTORIES(LoG)
INCLUDE_DIRECTORIES(ui)
INCLUDE_DIRECTORIES( ${OPENCV_INCLUDE_DIR} ) 
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# add source directory
AUX_SOURCE_DIRECTORY(. DIR_SRCS)
AUX_SOURCE_DIRECTORY(gmm DIR_SRCS)
AUX_SOURCE_DIRECTORY(grabcut DIR_SRCS)
AUX_SOURCE_DIRECTORY(maxflow DIR_SRCS)
AUX_SOURCE_DIRECTORY(LoG DIR_SRCS)
# QT UI Wrap & resource add
file(GLOB_RECURSE GUI_H    "ui/*.h"  )
file(GLOB_RECURSE GUI_CPP  "ui/*.cpp")
file(GLOB_RECURSE GUI_UI   "ui/*.ui" )
file(GLOB_RECURSE GUI_QRC  "ui/*.qrc")
qt5_wrap_ui(GUI_H ${GUI_UI})
qt5_add_resources(GUI_QRC ${GUI_QRC})
# Tell CMake to create the helloworld executable
if(APPLE)
	add_executable(QGrabCut MACOSX_BUNDLE ${DIR_SRCS} ${GUI_H} ${GUI_CPP} ${GUI_MOC} ${GUI_UI} ${GUI_QRC})
elseif(WIN32)
	add_executable(QGrabCut WIN32  ${DIR_SRCS} ${GUI_H} ${GUI_CPP} ${GUI_MOC} ${GUI_UI} ${GUI_QRC})
else()
	add_executable(QGrabCut ${DIR_SRCS} ${GUI_H} ${GUI_CPP} ${GUI_MOC} ${GUI_UI} ${GUI_QRC})
endif()
# Use the Widgets module from Qt 5.
target_link_libraries(QGrabCut Qt5::Widgets Qt5::Core Qt5::Gui)
#message("${OpenCV_LIBS}")
#message("${OpenCV_LIBRARIES}")
target_link_libraries(QGrabCut ${OpenCV_LIBS})
