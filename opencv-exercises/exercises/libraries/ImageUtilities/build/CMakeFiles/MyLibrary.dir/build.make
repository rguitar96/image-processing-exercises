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
CMAKE_SOURCE_DIR = /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build

# Include any dependencies generated for this target.
include CMakeFiles/MyLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyLibrary.dir/flags.make

CMakeFiles/MyLibrary.dir/image_utilities.cpp.o: CMakeFiles/MyLibrary.dir/flags.make
CMakeFiles/MyLibrary.dir/image_utilities.cpp.o: ../image_utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyLibrary.dir/image_utilities.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyLibrary.dir/image_utilities.cpp.o -c /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp

CMakeFiles/MyLibrary.dir/image_utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyLibrary.dir/image_utilities.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp > CMakeFiles/MyLibrary.dir/image_utilities.cpp.i

CMakeFiles/MyLibrary.dir/image_utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyLibrary.dir/image_utilities.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/image_utilities.cpp -o CMakeFiles/MyLibrary.dir/image_utilities.cpp.s

CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires:

.PHONY : CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires

CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides: CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires
	$(MAKE) -f CMakeFiles/MyLibrary.dir/build.make CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides.build
.PHONY : CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides

CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.provides.build: CMakeFiles/MyLibrary.dir/image_utilities.cpp.o


# Object files for target MyLibrary
MyLibrary_OBJECTS = \
"CMakeFiles/MyLibrary.dir/image_utilities.cpp.o"

# External object files for target MyLibrary
MyLibrary_EXTERNAL_OBJECTS =

libMyLibrary.a: CMakeFiles/MyLibrary.dir/image_utilities.cpp.o
libMyLibrary.a: CMakeFiles/MyLibrary.dir/build.make
libMyLibrary.a: CMakeFiles/MyLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyLibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles/MyLibrary.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyLibrary.dir/build: libMyLibrary.a

.PHONY : CMakeFiles/MyLibrary.dir/build

CMakeFiles/MyLibrary.dir/requires: CMakeFiles/MyLibrary.dir/image_utilities.cpp.o.requires

.PHONY : CMakeFiles/MyLibrary.dir/requires

CMakeFiles/MyLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyLibrary.dir/clean

CMakeFiles/MyLibrary.dir/depend:
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/libraries/ImageUtilities/build/CMakeFiles/MyLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyLibrary.dir/depend
