# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = D:/Cmake/bin/cmake.exe

# The command to remove a file.
RM = D:/Cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/poject/cpp/2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/poject/cpp/2/build

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/main.cpp.obj: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/main.cpp.obj: E:/poject/cpp/2/main.cpp
CMakeFiles/hello.dir/main.cpp.obj: CMakeFiles/hello.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:/poject/cpp/2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/main.cpp.obj"
	D:/Cygwin/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.dir/main.cpp.obj -MF CMakeFiles/hello.dir/main.cpp.obj.d -o CMakeFiles/hello.dir/main.cpp.obj -c E:/poject/cpp/2/main.cpp

CMakeFiles/hello.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/main.cpp.i"
	D:/Cygwin/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:/poject/cpp/2/main.cpp > CMakeFiles/hello.dir/main.cpp.i

CMakeFiles/hello.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/main.cpp.s"
	D:/Cygwin/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:/poject/cpp/2/main.cpp -o CMakeFiles/hello.dir/main.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/main.cpp.obj"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello.exe: CMakeFiles/hello.dir/main.cpp.obj
hello.exe: CMakeFiles/hello.dir/build.make
hello.exe: CMakeFiles/hello.dir/linkLibs.rsp
hello.exe: CMakeFiles/hello.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:/poject/cpp/2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello.exe"
	D:/Cmake/bin/cmake.exe -E rm -f CMakeFiles/hello.dir/objects.a
	D:/Cygwin/bin/ar.exe qc CMakeFiles/hello.dir/objects.a @CMakeFiles/hello.dir/objects1.rsp
	D:/Cygwin/bin/c++.exe -Wl,--whole-archive CMakeFiles/hello.dir/objects.a -Wl,--no-whole-archive -o hello.exe -Wl,--out-implib,libhello.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/hello.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello.exe
.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/poject/cpp/2 E:/poject/cpp/2 E:/poject/cpp/2/build E:/poject/cpp/2/build E:/poject/cpp/2/build/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend

