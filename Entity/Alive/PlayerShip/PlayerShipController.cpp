//
// Created by wannes on 17.12.19.
//

#include "PlayerShipController.h"
#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipController::readInput() {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)){
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveRight();
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)){
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveLeft();
        }
}
Entity::PlayerShipController::PlayerShipController(const std::shared_ptr<ModelAbstract>& m,
                                                   const std::shared_ptr<ViewAbstract>& v)
    : EntityController(m, v)
{
}
void Entity::PlayerShipController::tick() {
        readInput();
}
