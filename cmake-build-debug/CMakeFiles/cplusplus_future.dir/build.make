# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mingguo/CLionProjects/cplusplus-future

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cplusplus_future.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cplusplus_future.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cplusplus_future.dir/flags.make

CMakeFiles/cplusplus_future.dir/Singleton.cpp.o: CMakeFiles/cplusplus_future.dir/flags.make
CMakeFiles/cplusplus_future.dir/Singleton.cpp.o: ../Singleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cplusplus_future.dir/Singleton.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cplusplus_future.dir/Singleton.cpp.o -c /Users/mingguo/CLionProjects/cplusplus-future/Singleton.cpp

CMakeFiles/cplusplus_future.dir/Singleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cplusplus_future.dir/Singleton.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mingguo/CLionProjects/cplusplus-future/Singleton.cpp > CMakeFiles/cplusplus_future.dir/Singleton.cpp.i

CMakeFiles/cplusplus_future.dir/Singleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cplusplus_future.dir/Singleton.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mingguo/CLionProjects/cplusplus-future/Singleton.cpp -o CMakeFiles/cplusplus_future.dir/Singleton.cpp.s

CMakeFiles/cplusplus_future.dir/main.cpp.o: CMakeFiles/cplusplus_future.dir/flags.make
CMakeFiles/cplusplus_future.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cplusplus_future.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cplusplus_future.dir/main.cpp.o -c /Users/mingguo/CLionProjects/cplusplus-future/main.cpp

CMakeFiles/cplusplus_future.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cplusplus_future.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mingguo/CLionProjects/cplusplus-future/main.cpp > CMakeFiles/cplusplus_future.dir/main.cpp.i

CMakeFiles/cplusplus_future.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cplusplus_future.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mingguo/CLionProjects/cplusplus-future/main.cpp -o CMakeFiles/cplusplus_future.dir/main.cpp.s

# Object files for target cplusplus_future
cplusplus_future_OBJECTS = \
"CMakeFiles/cplusplus_future.dir/Singleton.cpp.o" \
"CMakeFiles/cplusplus_future.dir/main.cpp.o"

# External object files for target cplusplus_future
cplusplus_future_EXTERNAL_OBJECTS =

cplusplus_future: CMakeFiles/cplusplus_future.dir/Singleton.cpp.o
cplusplus_future: CMakeFiles/cplusplus_future.dir/main.cpp.o
cplusplus_future: CMakeFiles/cplusplus_future.dir/build.make
cplusplus_future: CMakeFiles/cplusplus_future.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cplusplus_future"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cplusplus_future.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cplusplus_future.dir/build: cplusplus_future

.PHONY : CMakeFiles/cplusplus_future.dir/build

CMakeFiles/cplusplus_future.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cplusplus_future.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cplusplus_future.dir/clean

CMakeFiles/cplusplus_future.dir/depend:
	cd /Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mingguo/CLionProjects/cplusplus-future /Users/mingguo/CLionProjects/cplusplus-future /Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug /Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug /Users/mingguo/CLionProjects/cplusplus-future/cmake-build-debug/CMakeFiles/cplusplus_future.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cplusplus_future.dir/depend
