# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/germanshab/UNIV LCP1/MOD GEO/Qt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build"

# Include any dependencies generated for this target.
include CMakeFiles/AppTinyMesh.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AppTinyMesh.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AppTinyMesh.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AppTinyMesh.dir/flags.make

ui_interface.h: /home/germanshab/Qt/6.8.0/gcc_64/libexec/uic
ui_interface.h: ../AppTinyMesh/UI/interface.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_interface.h"
	/home/germanshab/Qt/6.8.0/gcc_64/libexec/uic -o "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/ui_interface.h" "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/UI/interface.ui"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o: AppTinyMesh_autogen/mocs_compilation.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/AppTinyMesh_autogen/mocs_compilation.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/AppTinyMesh_autogen/mocs_compilation.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/AppTinyMesh_autogen/mocs_compilation.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o: ../AppTinyMesh/Source/Bezier/Bezier.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Bezier/Bezier.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Bezier/Bezier.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Bezier/Bezier.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o: ../AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o: ../AppTinyMesh/Source/Implicits/Node.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/Node.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/Node.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Implicits/Node.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o: ../AppTinyMesh/Source/Utils.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Utils.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Utils.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/Utils.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o: ../AppTinyMesh/Source/box.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/box.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/box.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/box.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o: ../AppTinyMesh/Source/camera.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/camera.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/camera.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/camera.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o: ../AppTinyMesh/Source/evector.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/evector.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/evector.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/evector.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o: ../AppTinyMesh/Source/implicits.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/implicits.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/implicits.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/implicits.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o: ../AppTinyMesh/Source/main.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/main.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/main.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/main.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o: ../AppTinyMesh/Source/mesh-widget.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh-widget.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh-widget.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh-widget.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o: ../AppTinyMesh/Source/mesh.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/mesh.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o: ../AppTinyMesh/Source/meshcolor.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/meshcolor.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/meshcolor.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/meshcolor.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o: ../AppTinyMesh/Source/qtemainwindow.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/qtemainwindow.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/qtemainwindow.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/qtemainwindow.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o: ../AppTinyMesh/Source/ray.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/ray.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/ray.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/ray.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o: ../AppTinyMesh/Source/shader-api.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/shader-api.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/shader-api.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/shader-api.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.s

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o: CMakeFiles/AppTinyMesh.dir/flags.make
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o: ../AppTinyMesh/Source/triangle.cpp
CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o: CMakeFiles/AppTinyMesh.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o -MF CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o.d -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o -c "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/triangle.cpp"

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/triangle.cpp" > CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.i

CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/germanshab/UNIV LCP1/MOD GEO/Qt/AppTinyMesh/Source/triangle.cpp" -o CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.s

# Object files for target AppTinyMesh
AppTinyMesh_OBJECTS = \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o" \
"CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o"

# External object files for target AppTinyMesh
AppTinyMesh_EXTERNAL_OBJECTS =

AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh_autogen/mocs_compilation.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Bezier/Bezier.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/MyImplicitSurf.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Implicits/Node.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/Utils.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/box.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/camera.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/evector.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/implicits.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/main.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh-widget.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/mesh.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/meshcolor.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/qtemainwindow.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/ray.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/shader-api.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/AppTinyMesh/Source/triangle.cpp.o
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/build.make
AppTinyMesh: /usr/lib/x86_64-linux-gnu/libGLEW.so
AppTinyMesh: /home/germanshab/Qt/6.8.0/gcc_64/lib/libQt6OpenGLWidgets.so.6.8.0
AppTinyMesh: /home/germanshab/Qt/6.8.0/gcc_64/lib/libQt6Widgets.so.6.8.0
AppTinyMesh: /home/germanshab/Qt/6.8.0/gcc_64/lib/libQt6OpenGL.so.6.8.0
AppTinyMesh: /home/germanshab/Qt/6.8.0/gcc_64/lib/libQt6Gui.so.6.8.0
AppTinyMesh: /usr/lib/x86_64-linux-gnu/libGLX.so
AppTinyMesh: /usr/lib/x86_64-linux-gnu/libOpenGL.so
AppTinyMesh: /home/germanshab/Qt/6.8.0/gcc_64/lib/libQt6Core.so.6.8.0
AppTinyMesh: CMakeFiles/AppTinyMesh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable AppTinyMesh"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AppTinyMesh.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_directory /home/germanshab/UNIV\ LCP1/MOD\ GEO/Qt/AppTinyMesh/Shaders /home/germanshab/UNIV\ LCP1/MOD\ GEO/Qt/build/Shaders

# Rule to build all files generated by this target.
CMakeFiles/AppTinyMesh.dir/build: AppTinyMesh
.PHONY : CMakeFiles/AppTinyMesh.dir/build

CMakeFiles/AppTinyMesh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AppTinyMesh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AppTinyMesh.dir/clean

CMakeFiles/AppTinyMesh.dir/depend: ui_interface.h
	cd "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/germanshab/UNIV LCP1/MOD GEO/Qt" "/home/germanshab/UNIV LCP1/MOD GEO/Qt" "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build" "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build" "/home/germanshab/UNIV LCP1/MOD GEO/Qt/build/CMakeFiles/AppTinyMesh.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AppTinyMesh.dir/depend

