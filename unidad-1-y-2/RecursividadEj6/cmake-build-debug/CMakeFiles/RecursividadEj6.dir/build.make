# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hector/opt/clion2021/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hector/opt/clion2021/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RecursividadEj6.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/RecursividadEj6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RecursividadEj6.dir/flags.make

CMakeFiles/RecursividadEj6.dir/main.cpp.o: CMakeFiles/RecursividadEj6.dir/flags.make
CMakeFiles/RecursividadEj6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RecursividadEj6.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RecursividadEj6.dir/main.cpp.o -c /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/main.cpp

CMakeFiles/RecursividadEj6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RecursividadEj6.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/main.cpp > CMakeFiles/RecursividadEj6.dir/main.cpp.i

CMakeFiles/RecursividadEj6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RecursividadEj6.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/main.cpp -o CMakeFiles/RecursividadEj6.dir/main.cpp.s

# Object files for target RecursividadEj6
RecursividadEj6_OBJECTS = \
"CMakeFiles/RecursividadEj6.dir/main.cpp.o"

# External object files for target RecursividadEj6
RecursividadEj6_EXTERNAL_OBJECTS =

RecursividadEj6: CMakeFiles/RecursividadEj6.dir/main.cpp.o
RecursividadEj6: CMakeFiles/RecursividadEj6.dir/build.make
RecursividadEj6: CMakeFiles/RecursividadEj6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RecursividadEj6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RecursividadEj6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RecursividadEj6.dir/build: RecursividadEj6
.PHONY : CMakeFiles/RecursividadEj6.dir/build

CMakeFiles/RecursividadEj6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RecursividadEj6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RecursividadEj6.dir/clean

CMakeFiles/RecursividadEj6.dir/depend:
	cd /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6 /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6 /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug /home/hector/estructura-de-datos_isc_3er/unidad-1-y-2/RecursividadEj6/cmake-build-debug/CMakeFiles/RecursividadEj6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RecursividadEj6.dir/depend

