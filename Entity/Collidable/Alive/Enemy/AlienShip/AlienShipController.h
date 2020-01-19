//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPCONTROLLER_H
#define SPACE_INVADERS_ALIENSHIPCONTROLLER_H
#include "../EnemyController.h"
#include "AlienShipModel.h"
#include "AlienShipView.h"
#include <stdlib.h>
#include <time.h>

namespace Entity {

/**
 * \brief the controller of an alienship
 */
class AlienShipController : public Entity::EnemyController
{
public:
        /**
         * \brief the constructor of an alienshipcontroller
         * @param m
         * @param v
         */
        AlienShipController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief does the movement and the shooting of an alienship every tick
         */
        void tick();
        /**
         * \brief creates a bullet
         */
        void shoot();
};
} // namespace Entity
#endif // SPACE_INVADERS_ALIENSHIPCONTROLLER_H
