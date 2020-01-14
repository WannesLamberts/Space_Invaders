//
// Created by wannes on 22.12.19.
//

#include "AlienShipController.h"
#include "../../../../Utils/ObjectManager.h"

#include <iostream>
Entity::AlienShipController::AlienShipController(const std::shared_ptr<ModelAbstract>& m,
                                                 const std::shared_ptr<ViewAbstract>& v)
    : AliveController(m, v)
{
}
void Entity::AlienShipController::tick()
{
        shoot();
        if (std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->getFireCooldown() > 0) {
                std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->setFireCooldown(
                    std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->getFireCooldown() - 1);
        }
        if (std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->isRight()) {
                if (!std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveRight()) {
                        std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->setRight(false);
                        std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveDown();
                }
        } else {
                if (!std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveLeft()) {
                        std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->setRight(true);
                        std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveDown();

                }
        }
}
void Entity::AlienShipController::shoot()
{
        if (std::dynamic_pointer_cast<Entity::AliveModel>(m)->getFireCooldown() == 0) {
                std::dynamic_pointer_cast<Entity::AliveModel>(m)->setFireCooldown(rand() % 500);
                std::shared_ptr<Entity::AliveModel> mod = std::dynamic_pointer_cast<Entity::AliveModel>(m);
                Utils::ObjectManager::getInstance().createBullet(
                    Utils::Vector2D(mod->getPosition().x, mod->getPosition().y), Utils::Vector2D(0.2, 0.2), -0.1,
                    false);
        }
}