cmake_minimum_required(VERSION 3.2)
project("Editor demo")

set(CMAKE_MODULE_PATH  ${PROJECT_SOURCE_DIR}/cmake-extensions/ )
find_package(PkgConfig)

message("Project source dir is: " ${PROJECT_SOURCE_DIR})
message("Project bin dir is: " ${PROJECT_BINARY_DIR})

pkg_check_modules (GTKMM gtkmm-3.0)

link_directories(
    ${GTKMM_LIBRARY_DIRS}
)
include_directories(
    ${GTKMM_INCLUDE_DIRS}
)

set(CMAKE_CXX_STANDARD 14)

include_directories(./src )

add_executable(editor-demo 
	src/main.cc
	src/editorwindow.cc
	src/texttagfactory.cc
	src/texttagfactoryimpl.cc
	)
target_link_libraries(editor-demo ${GTKMM_LIBRARIES})
