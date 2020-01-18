//
// Created by wannes on 18.01.20.
//

#include "ShieldController.h"
Entity::ShieldController::ShieldController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : CollidableController(m, v)
{
}
void Entity::ShieldController::tick() {}
void Entity::ShieldController::onCollision(std::shared_ptr<Entity::CollidableController> b) {}
