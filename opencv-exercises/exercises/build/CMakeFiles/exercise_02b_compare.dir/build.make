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
include CMakeFiles/exercise_02b_compare.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise_02b_compare.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise_02b_compare.dir/flags.make

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o: CMakeFiles/exercise_02b_compare.dir/flags.make
CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o: ../exercise_02b_compare.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o -c /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/exercise_02b_compare.cpp

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/exercise_02b_compare.cpp > CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.i

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/exercise_02b_compare.cpp -o CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.s

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.requires:

.PHONY : CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.requires

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.provides: CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.requires
	$(MAKE) -f CMakeFiles/exercise_02b_compare.dir/build.make CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.provides.build
.PHONY : CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.provides

CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.provides.build: CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o


# Object files for target exercise_02b_compare
exercise_02b_compare_OBJECTS = \
"CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o"

# External object files for target exercise_02b_compare
exercise_02b_compare_EXTERNAL_OBJECTS =

exercise_02b_compare: CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o
exercise_02b_compare: CMakeFiles/exercise_02b_compare.dir/build.make
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
exercise_02b_compare: libraries/ImageUtilities/libImageUtilities.a
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
exercise_02b_compare: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
exercise_02b_compare: CMakeFiles/exercise_02b_compare.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exercise_02b_compare"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise_02b_compare.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise_02b_compare.dir/build: exercise_02b_compare

.PHONY : CMakeFiles/exercise_02b_compare.dir/build

CMakeFiles/exercise_02b_compare.dir/requires: CMakeFiles/exercise_02b_compare.dir/exercise_02b_compare.cpp.o.requires

.PHONY : CMakeFiles/exercise_02b_compare.dir/requires

CMakeFiles/exercise_02b_compare.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise_02b_compare.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise_02b_compare.dir/clean

CMakeFiles/exercise_02b_compare.dir/depend:
	cd /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build /home/rodrigo/universidad/image-processing-exercises/opencv-exercises/exercises/build/CMakeFiles/exercise_02b_compare.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise_02b_compare.dir/depend

