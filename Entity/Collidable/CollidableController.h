//
// Created by wannes on 13.01.20.
//

#ifndef SPACE_INVADERS_COLLIDABLECONTROLLER_H
#define SPACE_INVADERS_COLLIDABLECONTROLLER_H
#include "../EntityController.h"
namespace Entity{

/**
 * \brief the controller for collidable objects
 */
class CollidableController: public EntityController
{

public:
        /**
         * \brief checks if this controller collides with controller
         * @param controller
         * @return if it collides or not
         */
        bool checkCollision(std::shared_ptr<Entity::CollidableController> controller);
        /**
         * \brief the constructor for the collidablecontroller
         * @param m the model of the collidablecontroller
         * @param v the view of the collidablecontroller
         */
        CollidableController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief does what the controller must do every game tick
         */
        virtual void tick();
private:
        /**
         * \brief this function does what must happen when this object collides with controller
         * @param controller
         */
        virtual void onCollision(std::shared_ptr<Entity::CollidableController> controller)=0;
};
}
#endif // SPACE_INVADERS_COLLIDABLECONTROLLER_H
