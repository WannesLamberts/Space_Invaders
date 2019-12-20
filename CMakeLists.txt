cmake_minimum_required(VERSION 3.12)
project(Space_Invaders)

set(CMAKE_CXX_STANDARD 14)

add_executable(Space_Invaders main.cpp Entity/Alive/PlayerShip/PlayerShipView.cpp Entity/Alive/PlayerShip/PlayerShipView.h Entity/EntityModel.cpp Entity/EntityModel.h Entity/EntityView.cpp Entity/EntityView.h MVCAbstract/ViewAbstract.h Utils/Transformation.h Utils/Transformation.cpp MVCAbstract/ModelAbstract.h Entity/Alive/PlayerShip/PlayerShipModel.cpp Entity/Alive/PlayerShip/PlayerShipModel.h MVCAbstract/ViewAbstract.cpp MVCAbstract/ModelAbstract.cpp Observer/Observer.h Observer/Subject.cpp Observer/Subject.h Utils/StopWatch.cpp Utils/StopWatch.h MVCAbstract/ControllerAbstract.cpp MVCAbstract/ControllerAbstract.h Entity/Alive/PlayerShip/PlayerShipController.cpp Entity/Alive/PlayerShip/PlayerShipController.h MVCAbstract/Controllable.h Entity/EntityController.cpp Entity/EntityController.h Entity/Alive/AliveModel.h Entity/Alive/AliveModel.cpp Utils/Vector2D.h)
target_link_libraries(Space_Invaders "-lsfml-graphics -lsfml-window -lsfml-system")
