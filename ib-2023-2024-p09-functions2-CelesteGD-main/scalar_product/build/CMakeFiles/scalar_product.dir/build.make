# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build

# Include any dependencies generated for this target.
include CMakeFiles/scalar_product.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/scalar_product.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scalar_product.dir/flags.make

CMakeFiles/scalar_product.dir/src/scalar_product.cc.o: CMakeFiles/scalar_product.dir/flags.make
CMakeFiles/scalar_product.dir/src/scalar_product.cc.o: ../src/scalar_product.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scalar_product.dir/src/scalar_product.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scalar_product.dir/src/scalar_product.cc.o -c /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product.cc

CMakeFiles/scalar_product.dir/src/scalar_product.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scalar_product.dir/src/scalar_product.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product.cc > CMakeFiles/scalar_product.dir/src/scalar_product.cc.i

CMakeFiles/scalar_product.dir/src/scalar_product.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scalar_product.dir/src/scalar_product.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product.cc -o CMakeFiles/scalar_product.dir/src/scalar_product.cc.s

CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o: CMakeFiles/scalar_product.dir/flags.make
CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o: ../src/scalar_product_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o -c /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product_main.cc

CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product_main.cc > CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.i

CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/src/scalar_product_main.cc -o CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.s

# Object files for target scalar_product
scalar_product_OBJECTS = \
"CMakeFiles/scalar_product.dir/src/scalar_product.cc.o" \
"CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o"

# External object files for target scalar_product
scalar_product_EXTERNAL_OBJECTS =

scalar_product: CMakeFiles/scalar_product.dir/src/scalar_product.cc.o
scalar_product: CMakeFiles/scalar_product.dir/src/scalar_product_main.cc.o
scalar_product: CMakeFiles/scalar_product.dir/build.make
scalar_product: CMakeFiles/scalar_product.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable scalar_product"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scalar_product.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scalar_product.dir/build: scalar_product

.PHONY : CMakeFiles/scalar_product.dir/build

CMakeFiles/scalar_product.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scalar_product.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scalar_product.dir/clean

CMakeFiles/scalar_product.dir/depend:
	cd /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build /home/usuario/practica09/ib-2023-2024-p09-functions2-CelesteGD-main/scalar_product/build/CMakeFiles/scalar_product.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scalar_product.dir/depend

