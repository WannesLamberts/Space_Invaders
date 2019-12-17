//
// Created by wannes on 17.12.19.
//

#include "PlayerShipController.h"
#include <iostream>
void Entity::PlayerShipController::readInput() {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)){
                m->moveRight();
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)){
                m->moveLeft();
        }
}
Entity::PlayerShipController::PlayerShipController(Entity::PlayerShipModel* m, Entity::PlayerShipView* v) : m(m), v(v)
{
}
