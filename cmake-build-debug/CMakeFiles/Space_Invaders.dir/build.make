# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/wannes/Downloads/clion-2019.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wannes/Downloads/clion-2019.3.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wannes/Desktop/Space_Invaders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wannes/Desktop/Space_Invaders/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Space_Invaders.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Space_Invaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Space_Invaders.dir/flags.make

CMakeFiles/Space_Invaders.dir/main.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Space_Invaders.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/main.cpp.o -c /home/wannes/Desktop/Space_Invaders/main.cpp

CMakeFiles/Space_Invaders.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/main.cpp > CMakeFiles/Space_Invaders.dir/main.cpp.i

CMakeFiles/Space_Invaders.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/main.cpp -o CMakeFiles/Space_Invaders.dir/main.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o: ../Entity/PlayerShip/PlayerShipView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp > CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o: ../Entity/EntityModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/EntityModel.cpp

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/EntityModel.cpp > CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/EntityModel.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o: ../Entity/EntityView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/EntityView.cpp

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/EntityView.cpp > CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/EntityView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o: ../Entity/EnemyShip/EnemyShipView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp > CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/EnemyShip/EnemyShipView.cpp -o CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.s

CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o: ../Utils/Transformation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o -c /home/wannes/Desktop/Space_Invaders/Utils/Transformation.cpp

CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Utils/Transformation.cpp > CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.i

CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Utils/Transformation.cpp -o CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o: ../Entity/PlayerShip/PlayerShipModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipModel.cpp

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipModel.cpp > CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipModel.cpp -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.s

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o: ../MVCAbstract/ViewAbstract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o -c /home/wannes/Desktop/Space_Invaders/MVCAbstract/ViewAbstract.cpp

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/MVCAbstract/ViewAbstract.cpp > CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.i

CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/MVCAbstract/ViewAbstract.cpp -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.s

CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o: ../MVCAbstract/ModelAbstract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o -c /home/wannes/Desktop/Space_Invaders/MVCAbstract/ModelAbstract.cpp

CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/MVCAbstract/ModelAbstract.cpp > CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.i

CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/MVCAbstract/ModelAbstract.cpp -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.s

CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o: ../MVCAbstract/Subject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o -c /home/wannes/Desktop/Space_Invaders/MVCAbstract/Subject.cpp

CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/MVCAbstract/Subject.cpp > CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.i

CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/MVCAbstract/Subject.cpp -o CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.s

CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o: ../Utils/StopWatch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o -c /home/wannes/Desktop/Space_Invaders/Utils/StopWatch.cpp

CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Utils/StopWatch.cpp > CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.i

CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Utils/StopWatch.cpp -o CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.s

CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o: ../MVCAbstract/ControllerAbstract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o -c /home/wannes/Desktop/Space_Invaders/MVCAbstract/ControllerAbstract.cpp

CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/MVCAbstract/ControllerAbstract.cpp > CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.i

CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/MVCAbstract/ControllerAbstract.cpp -o CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.s

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o: CMakeFiles/Space_Invaders.dir/flags.make
CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o: ../Entity/PlayerShip/PlayerShipController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o -c /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipController.cpp

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipController.cpp > CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.i

CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wannes/Desktop/Space_Invaders/Entity/PlayerShip/PlayerShipController.cpp -o CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.s

# Object files for target Space_Invaders
Space_Invaders_OBJECTS = \
"CMakeFiles/Space_Invaders.dir/main.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o" \
"CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o" \
"CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o" \
"CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o" \
"CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o" \
"CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o"

# External object files for target Space_Invaders
Space_Invaders_EXTERNAL_OBJECTS =

Space_Invaders: CMakeFiles/Space_Invaders.dir/main.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EntityModel.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EntityView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/EnemyShip/EnemyShipView.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Utils/Transformation.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipModel.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/MVCAbstract/ViewAbstract.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/MVCAbstract/ModelAbstract.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/MVCAbstract/Subject.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Utils/StopWatch.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/MVCAbstract/ControllerAbstract.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/Entity/PlayerShip/PlayerShipController.cpp.o
Space_Invaders: CMakeFiles/Space_Invaders.dir/build.make
Space_Invaders: CMakeFiles/Space_Invaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable Space_Invaders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Space_Invaders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Space_Invaders.dir/build: Space_Invaders

.PHONY : CMakeFiles/Space_Invaders.dir/build

CMakeFiles/Space_Invaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Space_Invaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Space_Invaders.dir/clean

CMakeFiles/Space_Invaders.dir/depend:
	cd /home/wannes/Desktop/Space_Invaders/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wannes/Desktop/Space_Invaders /home/wannes/Desktop/Space_Invaders /home/wannes/Desktop/Space_Invaders/cmake-build-debug /home/wannes/Desktop/Space_Invaders/cmake-build-debug /home/wannes/Desktop/Space_Invaders/cmake-build-debug/CMakeFiles/Space_Invaders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Space_Invaders.dir/depend

