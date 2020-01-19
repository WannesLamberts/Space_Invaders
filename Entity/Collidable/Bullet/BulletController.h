//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETCONTROLLER_H
#define SPACE_INVADERS_BULLETCONTROLLER_H
#include "../../Collidable/CollidableController.h"
#include "BulletModel.h"
namespace Entity {
/**
 * \brief the controller of the bullet
 */
class BulletController : public CollidableController, public std::enable_shared_from_this<BulletController>
{
public:
        /**
         * \brief let's the bulletmodel travel() every tick() and if the bullet goes out of the game adds the bullet to
         * objectstodelete
         */
        void tick();
        /**
         * \brief constructor for bulletcontroller
         * @param m
         * @param v
         */
        BulletController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         *\brief handles the collision for bullet between bullet and controller
         * @param controller
         */
        void onCollision(std::shared_ptr<Entity::CollidableController> controller);
};
} // namespace Entity

#endif // SPACE_INVADERS_BULLETCONTROLLER_H
