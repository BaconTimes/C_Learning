# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/clion_c_structure.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clion_c_structure.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clion_c_structure.dir/flags.make

CMakeFiles/clion_c_structure.dir/main.c.o: CMakeFiles/clion_c_structure.dir/flags.make
CMakeFiles/clion_c_structure.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/clion_c_structure.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/clion_c_structure.dir/main.c.o   -c /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/main.c

CMakeFiles/clion_c_structure.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clion_c_structure.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/main.c > CMakeFiles/clion_c_structure.dir/main.c.i

CMakeFiles/clion_c_structure.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clion_c_structure.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/main.c -o CMakeFiles/clion_c_structure.dir/main.c.s

CMakeFiles/clion_c_structure.dir/main.c.o.requires:

.PHONY : CMakeFiles/clion_c_structure.dir/main.c.o.requires

CMakeFiles/clion_c_structure.dir/main.c.o.provides: CMakeFiles/clion_c_structure.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/clion_c_structure.dir/build.make CMakeFiles/clion_c_structure.dir/main.c.o.provides.build
.PHONY : CMakeFiles/clion_c_structure.dir/main.c.o.provides

CMakeFiles/clion_c_structure.dir/main.c.o.provides.build: CMakeFiles/clion_c_structure.dir/main.c.o


CMakeFiles/clion_c_structure.dir/list.c.o: CMakeFiles/clion_c_structure.dir/flags.make
CMakeFiles/clion_c_structure.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/clion_c_structure.dir/list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/clion_c_structure.dir/list.c.o   -c /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/list.c

CMakeFiles/clion_c_structure.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clion_c_structure.dir/list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/list.c > CMakeFiles/clion_c_structure.dir/list.c.i

CMakeFiles/clion_c_structure.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clion_c_structure.dir/list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/list.c -o CMakeFiles/clion_c_structure.dir/list.c.s

CMakeFiles/clion_c_structure.dir/list.c.o.requires:

.PHONY : CMakeFiles/clion_c_structure.dir/list.c.o.requires

CMakeFiles/clion_c_structure.dir/list.c.o.provides: CMakeFiles/clion_c_structure.dir/list.c.o.requires
	$(MAKE) -f CMakeFiles/clion_c_structure.dir/build.make CMakeFiles/clion_c_structure.dir/list.c.o.provides.build
.PHONY : CMakeFiles/clion_c_structure.dir/list.c.o.provides

CMakeFiles/clion_c_structure.dir/list.c.o.provides.build: CMakeFiles/clion_c_structure.dir/list.c.o


# Object files for target clion_c_structure
clion_c_structure_OBJECTS = \
"CMakeFiles/clion_c_structure.dir/main.c.o" \
"CMakeFiles/clion_c_structure.dir/list.c.o"

# External object files for target clion_c_structure
clion_c_structure_EXTERNAL_OBJECTS =

clion_c_structure: CMakeFiles/clion_c_structure.dir/main.c.o
clion_c_structure: CMakeFiles/clion_c_structure.dir/list.c.o
clion_c_structure: CMakeFiles/clion_c_structure.dir/build.make
clion_c_structure: CMakeFiles/clion_c_structure.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable clion_c_structure"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clion_c_structure.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clion_c_structure.dir/build: clion_c_structure

.PHONY : CMakeFiles/clion_c_structure.dir/build

CMakeFiles/clion_c_structure.dir/requires: CMakeFiles/clion_c_structure.dir/main.c.o.requires
CMakeFiles/clion_c_structure.dir/requires: CMakeFiles/clion_c_structure.dir/list.c.o.requires

.PHONY : CMakeFiles/clion_c_structure.dir/requires

CMakeFiles/clion_c_structure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clion_c_structure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clion_c_structure.dir/clean

CMakeFiles/clion_c_structure.dir/depend:
	cd /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug /Users/iosbacon/Desktop/learnings/C_Learning/clion_c_structure/cmake-build-debug/CMakeFiles/clion_c_structure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clion_c_structure.dir/depend

