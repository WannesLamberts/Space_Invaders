//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_ENEMYCONTROLLER_H
#define SPACE_INVADERS_ENEMYCONTROLLER_H
#include "../AliveController.h"
#include "EnemyModel.h"
namespace Entity{


class EnemyController: public Entity::AliveController,public std::enable_shared_from_this<Entity::EnemyController>
{
public:
        EnemyController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        virtual void tick();
        void onCollision(std::shared_ptr<Entity::CollidableController> b);

};
}
#endif // SPACE_INVADERS_ENEMYCONTROLLER_H
