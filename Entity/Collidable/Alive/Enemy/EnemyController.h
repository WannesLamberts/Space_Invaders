//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_ENEMYCONTROLLER_H
#define SPACE_INVADERS_ENEMYCONTROLLER_H
#include "../AliveController.h"
#include "EnemyModel.h"
namespace Entity{

/**
 * \brief the controller for an enemy
 */
class EnemyController: public Entity::AliveController,public std::enable_shared_from_this<Entity::EnemyController>
{
public:
        /**
         * \brief the constructor for an EnemyController
         * @param m
         * @param v
         */
        EnemyController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief does the movement an enemy every tick
         */
        virtual void tick();
        /**
         * \brief handles the collision between this object and the object with controller controller
         * @param controller
         */
        void onCollision(std::shared_ptr<Entity::CollidableController> controller);

};
}
#endif // SPACE_INVADERS_ENEMYCONTROLLER_H
