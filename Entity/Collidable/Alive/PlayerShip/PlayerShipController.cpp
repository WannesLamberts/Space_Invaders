//
// Created by wannes on 17.12.19.
//

#include "PlayerShipController.h"
#include "../../../../Utils/ObjectManager.h"
#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipController::shoot() {
        if (std::dynamic_pointer_cast<Entity::AliveModel>(m)->getFireCooldown() == 0) {
                std::dynamic_pointer_cast<Entity::AliveModel>(m)->setFireCooldown(10);
                std::shared_ptr<Entity::AliveModel> mod = std::dynamic_pointer_cast<Entity::AliveModel>(m);
                Utils::ObjectManager::getInstance().createBullet(
                    Utils::Vector2D(mod->getPosition().x, mod->getPosition().y-0.2), Utils::Vector2D(0.2, 0.2), 0.1,true,shared_from_this());
        }
}
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
