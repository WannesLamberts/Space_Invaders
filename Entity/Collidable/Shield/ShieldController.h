//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDCONTROLLER_H
#define SPACE_INVADERS_SHIELDCONTROLLER_H
#include "../CollidableController.h"
#include "ShieldModel.h"
#include "ShieldView.h"
namespace Entity {
/**
 * \brief controller for the shield class
 */
class ShieldController : public Entity::CollidableController
{
public:
        /**
         * \brief constructor for the shieldcontroller
         * @param m
         * @param v
         */
        ShieldController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief does what the controller must do every game tick
         */
        void tick();
        /**
         * \brief this function does what must happen when this object collides with controller
         * @param controller
         */
        void onCollision(std::shared_ptr<Entity::CollidableController> b);
};
} // namespace Entity
#endif // SPACE_INVADERS_SHIELDCONTROLLER_H
