# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/kawapa/Documents/cpp-practice/ABC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kawapa/Documents/cpp-practice/ABC/build

# Include any dependencies generated for this target.
include CMakeFiles/HelloWorld-lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloWorld-lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloWorld-lib.dir/flags.make

CMakeFiles/HelloWorld-lib.dir/main.cpp.o: CMakeFiles/HelloWorld-lib.dir/flags.make
CMakeFiles/HelloWorld-lib.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kawapa/Documents/cpp-practice/ABC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HelloWorld-lib.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloWorld-lib.dir/main.cpp.o -c /home/kawapa/Documents/cpp-practice/ABC/main.cpp

CMakeFiles/HelloWorld-lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloWorld-lib.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kawapa/Documents/cpp-practice/ABC/main.cpp > CMakeFiles/HelloWorld-lib.dir/main.cpp.i

CMakeFiles/HelloWorld-lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloWorld-lib.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kawapa/Documents/cpp-practice/ABC/main.cpp -o CMakeFiles/HelloWorld-lib.dir/main.cpp.s

# Object files for target HelloWorld-lib
HelloWorld__lib_OBJECTS = \
"CMakeFiles/HelloWorld-lib.dir/main.cpp.o"

# External object files for target HelloWorld-lib
HelloWorld__lib_EXTERNAL_OBJECTS =

libHelloWorld-lib.a: CMakeFiles/HelloWorld-lib.dir/main.cpp.o
libHelloWorld-lib.a: CMakeFiles/HelloWorld-lib.dir/build.make
libHelloWorld-lib.a: CMakeFiles/HelloWorld-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kawapa/Documents/cpp-practice/ABC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libHelloWorld-lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/HelloWorld-lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloWorld-lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HelloWorld-lib.dir/build: libHelloWorld-lib.a

.PHONY : CMakeFiles/HelloWorld-lib.dir/build

CMakeFiles/HelloWorld-lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloWorld-lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloWorld-lib.dir/clean

CMakeFiles/HelloWorld-lib.dir/depend:
	cd /home/kawapa/Documents/cpp-practice/ABC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kawapa/Documents/cpp-practice/ABC /home/kawapa/Documents/cpp-practice/ABC /home/kawapa/Documents/cpp-practice/ABC/build /home/kawapa/Documents/cpp-practice/ABC/build /home/kawapa/Documents/cpp-practice/ABC/build/CMakeFiles/HelloWorld-lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HelloWorld-lib.dir/depend

