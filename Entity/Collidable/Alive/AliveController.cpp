//
// Created by wannes on 22.12.19.
//

#include "AliveController.h"
#include "../../../Utils/ObjectManager.h"
#include <iostream>

void Entity::AliveController::shoot() {
        if (std::dynamic_pointer_cast<Entity::AliveModel>(m)->getFireCooldown() == 0) {
                std::dynamic_pointer_cast<Entity::AliveModel>(m)->setFireCooldown(10);
                std::cout << "fire" << std::endl;
                std::shared_ptr<Entity::AliveModel> mod = std::dynamic_pointer_cast<Entity::AliveModel>(m);
                Utils::ObjectManager::getInstance().createBullet(
                    Utils::Vector2D(mod->getPosition().x, mod->getPosition().y), Utils::Vector2D(0.2, 0.2), 0.1);
        }
}
Entity::AliveController::AliveController(const std::shared_ptr<ModelAbstract>& m,
                                         const std::shared_ptr<ViewAbstract>& v)
    : Entity::CollidableController(m, v)
{
}
