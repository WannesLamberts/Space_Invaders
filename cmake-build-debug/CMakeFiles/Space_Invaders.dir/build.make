# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/Space_Invaders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Space_Invaders/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Space_Invaders.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Space_Invaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Space_Invaders.dir/flags.make

CMakeFiles/Space_Invaders.dir/main.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Space_Invaders.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/main.cpp.o -c /home/student/Space_Invaders/main.cpp

CMakeFiles/Space_Invaders.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/main.cpp > CMakeFiles/Space_Invaders.dir/main.cpp.i

CMakeFiles/Space_Invaders.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/main.cpp -o CMakeFiles/Space_Invaders.dir/main.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o: ../Entity/PlayerShip/PlayerShipView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o -c /home/student/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp > CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o: ../Entity/EntityModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o -c /home/student/Space_Invaders/Entity/EntityModel.cpp

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/Entity/EntityModel.cpp > CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/Entity/EntityModel.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o: ../Entity/EntityView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o -c /home/student/Space_Invaders/Entity/EntityView.cpp

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/Entity/EntityView.cpp > CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/Entity/EntityView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o: ../MVCAbstract/ViewAbstract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o -c /home/student/Space_Invaders/MVCAbstract/ViewAbstract.cpp

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/MVCAbstract/ViewAbstract.cpp > CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/MVCAbstract/ViewAbstract.cpp -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o: ../Entity/EnemyShip/EnemyShipView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o -c /home/student/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp > CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s

# Object files for target Space_Invaders
Space_Invaders_OBJECTS = \
"CMakeFiles/Space_Invaders.dir/main.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o" \
"CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o"

# External object files for target Space_Invaders
Space_Invaders_EXTERNAL_OBJECTS =

Space_Invaders: CMakeFiles/Space_Invaders.dir/main.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/build.make
Space_Invaders: CMakeFiles/Space_Invaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Space_Invaders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Space_Invaders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Space_Invaders.dir/build: Space_Invaders

.PHONY : CMakeFiles/Space_Invaders.dir/build

CMakeFiles/Space_Invaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Space_Invaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Space_Invaders.dir/clean

CMakeFiles/Space_Invaders.dir/depend:
	cd /home/student/Space_Invaders/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Space_Invaders /home/student/Space_Invaders /home/student/Space_Invaders/cmake-build-debug /home/student/Space_Invaders/cmake-build-debug /home/student/Space_Invaders/cmake-build-debug/CMakeFiles/Space_Invaders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Space_Invaders.dir/depend

