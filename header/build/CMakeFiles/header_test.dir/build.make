# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build

# Include any dependencies generated for this target.
include CMakeFiles/header_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/header_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/header_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/header_test.dir/flags.make

CMakeFiles/header_test.dir/header_test.c.o: CMakeFiles/header_test.dir/flags.make
CMakeFiles/header_test.dir/header_test.c.o: /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/header_test.c
CMakeFiles/header_test.dir/header_test.c.o: CMakeFiles/header_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/header_test.dir/header_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/header_test.dir/header_test.c.o -MF CMakeFiles/header_test.dir/header_test.c.o.d -o CMakeFiles/header_test.dir/header_test.c.o -c /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/header_test.c

CMakeFiles/header_test.dir/header_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/header_test.dir/header_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/header_test.c > CMakeFiles/header_test.dir/header_test.c.i

CMakeFiles/header_test.dir/header_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/header_test.dir/header_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/header_test.c -o CMakeFiles/header_test.dir/header_test.c.s

CMakeFiles/header_test.dir/math_funcs.c.o: CMakeFiles/header_test.dir/flags.make
CMakeFiles/header_test.dir/math_funcs.c.o: /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/math_funcs.c
CMakeFiles/header_test.dir/math_funcs.c.o: CMakeFiles/header_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/header_test.dir/math_funcs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/header_test.dir/math_funcs.c.o -MF CMakeFiles/header_test.dir/math_funcs.c.o.d -o CMakeFiles/header_test.dir/math_funcs.c.o -c /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/math_funcs.c

CMakeFiles/header_test.dir/math_funcs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/header_test.dir/math_funcs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/math_funcs.c > CMakeFiles/header_test.dir/math_funcs.c.i

CMakeFiles/header_test.dir/math_funcs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/header_test.dir/math_funcs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/math_funcs.c -o CMakeFiles/header_test.dir/math_funcs.c.s

# Object files for target header_test
header_test_OBJECTS = \
"CMakeFiles/header_test.dir/header_test.c.o" \
"CMakeFiles/header_test.dir/math_funcs.c.o"

# External object files for target header_test
header_test_EXTERNAL_OBJECTS =

header_test: CMakeFiles/header_test.dir/header_test.c.o
header_test: CMakeFiles/header_test.dir/math_funcs.c.o
header_test: CMakeFiles/header_test.dir/build.make
header_test: CMakeFiles/header_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable header_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/header_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/header_test.dir/build: header_test
.PHONY : CMakeFiles/header_test.dir/build

CMakeFiles/header_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/header_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/header_test.dir/clean

CMakeFiles/header_test.dir/depend:
	cd /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build /home/luth3r/learn/C/Practice/Learn-C-the-hardway/header/build/CMakeFiles/header_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/header_test.dir/depend

