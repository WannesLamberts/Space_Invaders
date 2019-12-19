cmake_minimum_required(VERSION 3.12)
project(Space_Invaders)

set(CMAKE_CXX_STANDARD 14)

add_executable(Space_Invaders main.cpp Entity/PlayerShip/PlayerShipView.cpp Entity/PlayerShip/PlayerShipView.h Entity/EntityModel.cpp Entity/EntityModel.h Entity/EntityView.cpp Entity/EntityView.h MVCAbstract/ViewAbstract.h Utils/Transformation.h Utils/Transformation.cpp MVCAbstract/ModelAbstract.h Entity/PlayerShip/PlayerShipModel.cpp Entity/PlayerShip/PlayerShipModel.h MVCAbstract/ViewAbstract.cpp MVCAbstract/ModelAbstract.cpp MVCAbstract/Observer.h MVCAbstract/Subject.cpp MVCAbstract/Subject.h Utils/StopWatch.cpp Utils/StopWatch.h MVCAbstract/ControllerAbstract.cpp MVCAbstract/ControllerAbstract.h Entity/PlayerShip/PlayerShipController.cpp Entity/PlayerShip/PlayerShipController.h MVCAbstract/Controllable.h)
target_link_libraries(Space_Invaders "-lsfml-graphics -lsfml-window -lsfml-system")
