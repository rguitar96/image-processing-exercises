# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build

# Include any dependencies generated for this target.
include libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/depend.make

# Include the progress variables for this target.
include libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/flags.make

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/flags.make
libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o: ../libraries/ImageUtilities/image_utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o"
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyLibrary.dir/image_utilities.cpp.o -c /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyLibrary.dir/image_utilities.cpp.i"
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp > CMakeFiles/MyLibrary.dir/image_utilities.cpp.i

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyLibrary.dir/image_utilities.cpp.s"
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp -o CMakeFiles/MyLibrary.dir/image_utilities.cpp.s

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires:

.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires
	$(MAKE) -f libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/build.make libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides.build
.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides.build: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o


# Object files for target MyLibrary
MyLibrary_OBJECTS = \
"CMakeFiles/MyLibrary.dir/image_utilities.cpp.o"

# External object files for target MyLibrary
MyLibrary_EXTERNAL_OBJECTS =

libraries/ImageUtilities/libMyLibrary.a: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o
libraries/ImageUtilities/libMyLibrary.a: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/build.make
libraries/ImageUtilities/libMyLibrary.a: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyLibrary.a"
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && $(CMAKE_COMMAND) -P CMakeFiles/MyLibrary.dir/cmake_clean_target.cmake
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/build: libraries/ImageUtilities/libMyLibrary.a

.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/build

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/requires: libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires

.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/requires

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/clean:
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities && $(CMAKE_COMMAND) -P CMakeFiles/MyLibrary.dir/cmake_clean.cmake
.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/clean

libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/depend:
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libraries/ImageUtilities/CMakeFiles/MyLibrary.dir/depend

