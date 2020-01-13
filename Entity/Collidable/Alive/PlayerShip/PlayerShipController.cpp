//
// Created by wannes on 17.12.19.
//

#include "PlayerShipController.h"
#include "../../../../Utils/ObjectManager.h"
#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipController::readInput()
{
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveRight();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveLeft();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
                shoot();
        }
}
Entity::PlayerShipController::PlayerShipController(const std::shared_ptr<ModelAbstract>& m,
                                                   const std::shared_ptr<ViewAbstract>& v)
    : Entity::AliveController(m, v)
{
}
void Entity::PlayerShipController::tick()
{
        readInput();
        if (std::dynamic_pointer_cast<PlayerShipModel>(m)->getFireCooldown() > 0) {
                std::dynamic_pointer_cast<PlayerShipModel>(m)->setFireCooldown(
                    std::dynamic_pointer_cast<PlayerShipModel>(m)->getFireCooldown() - 1);
        }
}
