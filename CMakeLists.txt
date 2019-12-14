cmake_minimum_required(VERSION 3.12)
project(Space_Invaders)

set(CMAKE_CXX_STANDARD 14)

add_executable(Space_Invaders main.cpp Entity/PlayerShip/PlayerShipView.cpp Entity/PlayerShip/PlayerShipView.h Entity/EntityModel.cpp Entity/EntityModel.h Entity/EntityView.cpp Entity/EntityView.h MVCAbstract/ViewAbstract.h Entity/EnemyShip/EnemyShipView.cpp Entity/EnemyShip/EnemyShipView.h Utils/Transformation.cpp Utils/Transformation.h)
target_link_libraries(Space_Invaders "-lsfml-graphics -lsfml-window -lsfml-system")
