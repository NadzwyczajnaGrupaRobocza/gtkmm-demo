# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo

# Include any dependencies generated for this target.
include CMakeFiles/gtkmm-demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gtkmm-demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gtkmm-demo.dir/flags.make

CMakeFiles/gtkmm-demo.dir/src/main.cc.o: CMakeFiles/gtkmm-demo.dir/flags.make
CMakeFiles/gtkmm-demo.dir/src/main.cc.o: src/main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gtkmm-demo.dir/src/main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtkmm-demo.dir/src/main.cc.o -c /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/main.cc

CMakeFiles/gtkmm-demo.dir/src/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtkmm-demo.dir/src/main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/main.cc > CMakeFiles/gtkmm-demo.dir/src/main.cc.i

CMakeFiles/gtkmm-demo.dir/src/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtkmm-demo.dir/src/main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/main.cc -o CMakeFiles/gtkmm-demo.dir/src/main.cc.s

CMakeFiles/gtkmm-demo.dir/src/main.cc.o.requires:
.PHONY : CMakeFiles/gtkmm-demo.dir/src/main.cc.o.requires

CMakeFiles/gtkmm-demo.dir/src/main.cc.o.provides: CMakeFiles/gtkmm-demo.dir/src/main.cc.o.requires
	$(MAKE) -f CMakeFiles/gtkmm-demo.dir/build.make CMakeFiles/gtkmm-demo.dir/src/main.cc.o.provides.build
.PHONY : CMakeFiles/gtkmm-demo.dir/src/main.cc.o.provides

CMakeFiles/gtkmm-demo.dir/src/main.cc.o.provides.build: CMakeFiles/gtkmm-demo.dir/src/main.cc.o

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o: CMakeFiles/gtkmm-demo.dir/flags.make
CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o: src/examplewindow.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o -c /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/examplewindow.cc

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/examplewindow.cc > CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.i

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/examplewindow.cc -o CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.s

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.requires:
.PHONY : CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.requires

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.provides: CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.requires
	$(MAKE) -f CMakeFiles/gtkmm-demo.dir/build.make CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.provides.build
.PHONY : CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.provides

CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.provides.build: CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o: CMakeFiles/gtkmm-demo.dir/flags.make
CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o: src/keywordhighlighter.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o -c /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/keywordhighlighter.cc

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/keywordhighlighter.cc > CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.i

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/src/keywordhighlighter.cc -o CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.s

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.requires:
.PHONY : CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.requires

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.provides: CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.requires
	$(MAKE) -f CMakeFiles/gtkmm-demo.dir/build.make CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.provides.build
.PHONY : CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.provides

CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.provides.build: CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o

# Object files for target gtkmm-demo
gtkmm__demo_OBJECTS = \
"CMakeFiles/gtkmm-demo.dir/src/main.cc.o" \
"CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o" \
"CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o"

# External object files for target gtkmm-demo
gtkmm__demo_EXTERNAL_OBJECTS =

gtkmm-demo: CMakeFiles/gtkmm-demo.dir/src/main.cc.o
gtkmm-demo: CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o
gtkmm-demo: CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o
gtkmm-demo: CMakeFiles/gtkmm-demo.dir/build.make
gtkmm-demo: CMakeFiles/gtkmm-demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable gtkmm-demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtkmm-demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gtkmm-demo.dir/build: gtkmm-demo
.PHONY : CMakeFiles/gtkmm-demo.dir/build

CMakeFiles/gtkmm-demo.dir/requires: CMakeFiles/gtkmm-demo.dir/src/main.cc.o.requires
CMakeFiles/gtkmm-demo.dir/requires: CMakeFiles/gtkmm-demo.dir/src/examplewindow.cc.o.requires
CMakeFiles/gtkmm-demo.dir/requires: CMakeFiles/gtkmm-demo.dir/src/keywordhighlighter.cc.o.requires
.PHONY : CMakeFiles/gtkmm-demo.dir/requires

CMakeFiles/gtkmm-demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gtkmm-demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gtkmm-demo.dir/clean

CMakeFiles/gtkmm-demo.dir/depend:
	cd /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo /home/programmer/Pulpit/Prace_projektowe/gtkmm-demo/CMakeFiles/gtkmm-demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gtkmm-demo.dir/depend

