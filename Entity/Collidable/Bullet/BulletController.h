//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETCONTROLLER_H
#define SPACE_INVADERS_BULLETCONTROLLER_H
#include "../../Collidable/CollidableController.h"
#include "BulletModel.h"
namespace Entity{

class BulletController : public CollidableController,public std::enable_shared_from_this<BulletController>
{
public:
        void tick();
        BulletController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
         void onCollision(std::shared_ptr<Entity::CollidableController> b);

};
}

#endif // SPACE_INVADERS_BULLETCONTROLLER_H
