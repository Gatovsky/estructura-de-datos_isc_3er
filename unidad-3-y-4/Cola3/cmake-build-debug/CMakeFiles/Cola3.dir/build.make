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
CMAKE_SOURCE_DIR = /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cola3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Cola3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cola3.dir/flags.make

CMakeFiles/Cola3.dir/main.cpp.o: CMakeFiles/Cola3.dir/flags.make
CMakeFiles/Cola3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cola3.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Cola3.dir/main.cpp.o -c /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/main.cpp

CMakeFiles/Cola3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cola3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/main.cpp > CMakeFiles/Cola3.dir/main.cpp.i

CMakeFiles/Cola3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cola3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/main.cpp -o CMakeFiles/Cola3.dir/main.cpp.s

# Object files for target Cola3
Cola3_OBJECTS = \
"CMakeFiles/Cola3.dir/main.cpp.o"

# External object files for target Cola3
Cola3_EXTERNAL_OBJECTS =

Cola3: CMakeFiles/Cola3.dir/main.cpp.o
Cola3: CMakeFiles/Cola3.dir/build.make
Cola3: CMakeFiles/Cola3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cola3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cola3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cola3.dir/build: Cola3
.PHONY : CMakeFiles/Cola3.dir/build

CMakeFiles/Cola3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cola3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cola3.dir/clean

CMakeFiles/Cola3.dir/depend:
	cd /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3 /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3 /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug /home/hector/estructura-de-datos_isc_3er/unidad-3-y-4/Cola3/cmake-build-debug/CMakeFiles/Cola3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cola3.dir/depend

