//
// Created by wannes on 21.12.19.
//

#include "BulletController.h"
void Entity::BulletController::tick() {
        std::dynamic_pointer_cast<BulletModel>(m)->travel();

}
Entity::BulletController::BulletController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : EntityController(m, v)
{

}
