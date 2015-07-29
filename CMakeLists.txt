cmake_minimum_required(VERSION 3.2)
project("Gtkmm demo")

set(CMAKE_MODULE_PATH  ${PROJECT_SOURCE_DIR}/cmake-extensions/ )
find_package(PkgConfig)

message("Project source dir is: " ${PROJECT_SOURCE_DIR})

pkg_check_modules (GTKMM gtkmm-3.0)

link_directories(
    ${GTKMM_LIBRARY_DIRS}
)
include_directories(
    ${GTKMM_INCLUDE_DIRS}
)

set(CMAKE_CXX_STANDARD 11)

include_directories(./src )

add_executable(gtkmm-demo 
	src/main.cc
	src/examplewindow.cc
	src/keywordhighlighter.cc
	)
target_link_libraries(gtkmm-demo ${GTKMM_LIBRARIES})
