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
namespace Entity{


class PlayerShipController: public Entity::AliveController
{
public:
        void readInput();
        PlayerShipController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        void tick();
        void shoot();



};
}
#endif // SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
