//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIVECONTROLLER_H
#define SPACE_INVADERS_ALIVECONTROLLER_H
#include "../../Collidable/CollidableController.h"
#include "AliveModel.h"
namespace Entity {

/**
 * \brief the controller for all objects that can be seen as alive
 */
class AliveController : public Entity::CollidableController
{
public:
        /**
         * \brief the constructor for a alive controller
         * @param m
         * @param v
         */
        AliveController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
};
} // namespace Entity
#endif // SPACE_INVADERS_ALIVECONTROLLER_H
