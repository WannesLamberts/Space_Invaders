//
// Created by wannes on 17.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#define SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#include "../../../EntityController.h"
#include "../../Bullet/BulletController.h"
#include "../../Bullet/BulletModel.h"
#include "../../Bullet/BulletView.h"
#include "../AliveController.h"
#include "PlayerShipModel.h"
#include "PlayerShipView.h"
#include <SFML/Graphics.hpp>
namespace Entity {

/**
 * \brief the controller of a playership
 */
class PlayerShipController : public Entity::AliveController
{
public:
        /**
         * \brief reads the input of the keyboard and calls functions moveleft,moveright,shoot accordingly to the
         * input
         */
        void readInput();
        /**
         * \brief contstructor for the playershipcontroller
         * @param m
         * @param v
         */
        PlayerShipController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        /**
         * \brief reads the input and brings firecooldown down with 1 every tick
         */
        void tick();
        /**
         * \brief creates a bullet
         */
        void shoot();
        /**
         *\brief does everything a playership moest do when it collides with some other controller
         * @param controller
         */
        void onCollision(std::shared_ptr<Entity::CollidableController> controller);
};
} // namespace Entity
#endif // SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
