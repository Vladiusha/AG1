# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/share/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/local/share/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kalacvla/CLionProjects/progtest2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kalacvla/CLionProjects/progtest2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/progtest2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/progtest2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/progtest2.dir/flags.make

CMakeFiles/progtest2.dir/main.cpp.o: CMakeFiles/progtest2.dir/flags.make
CMakeFiles/progtest2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kalacvla/CLionProjects/progtest2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/progtest2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/progtest2.dir/main.cpp.o -c /home/kalacvla/CLionProjects/progtest2/main.cpp

CMakeFiles/progtest2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/progtest2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kalacvla/CLionProjects/progtest2/main.cpp > CMakeFiles/progtest2.dir/main.cpp.i

CMakeFiles/progtest2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/progtest2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kalacvla/CLionProjects/progtest2/main.cpp -o CMakeFiles/progtest2.dir/main.cpp.s

# Object files for target progtest2
progtest2_OBJECTS = \
"CMakeFiles/progtest2.dir/main.cpp.o"

# External object files for target progtest2
progtest2_EXTERNAL_OBJECTS =

progtest2: CMakeFiles/progtest2.dir/main.cpp.o
progtest2: CMakeFiles/progtest2.dir/build.make
progtest2: CMakeFiles/progtest2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kalacvla/CLionProjects/progtest2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable progtest2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/progtest2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/progtest2.dir/build: progtest2

.PHONY : CMakeFiles/progtest2.dir/build

CMakeFiles/progtest2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/progtest2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/progtest2.dir/clean

CMakeFiles/progtest2.dir/depend:
	cd /home/kalacvla/CLionProjects/progtest2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kalacvla/CLionProjects/progtest2 /home/kalacvla/CLionProjects/progtest2 /home/kalacvla/CLionProjects/progtest2/cmake-build-debug /home/kalacvla/CLionProjects/progtest2/cmake-build-debug /home/kalacvla/CLionProjects/progtest2/cmake-build-debug/CMakeFiles/progtest2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/progtest2.dir/depend

