//
// Created by wannes on 13.01.20.
//

#ifndef SPACE_INVADERS_COLLIDABLECONTROLLER_H
#define SPACE_INVADERS_COLLIDABLECONTROLLER_H
#include "../EntityController.h"
namespace Entity{


class CollidableController: public EntityController
{

public:
        bool checkCollision(std::shared_ptr<Entity::CollidableController> b);

        CollidableController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        virtual void tick();

private:
        virtual void onCollision(std::shared_ptr<Entity::CollidableController> b)=0;
};
}
#endif // SPACE_INVADERS_COLLIDABLECONTROLLER_H
