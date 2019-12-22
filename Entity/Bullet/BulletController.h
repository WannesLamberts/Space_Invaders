//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETCONTROLLER_H
#define SPACE_INVADERS_BULLETCONTROLLER_H
#include "../EntityController.h"
#include "BulletModel.h"
namespace Entity{

class BulletController : public EntityController
{
public:
        void tick();
        BulletController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
         void onCollision(std::shared_ptr<Entity::EntityController> b);

};
}

#endif // SPACE_INVADERS_BULLETCONTROLLER_H
