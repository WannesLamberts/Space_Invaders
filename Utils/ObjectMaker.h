//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECTMAKER_H
#define SPACE_INVADERS_OBJECTMAKER_H
#include "../Game.h"
#include "../Entity/Alive/PlayerShip/PlayerShipController.h"
#include "../Entity/Bullet/BulletController.h"

namespace Utils{


class ObjectMaker
{
public:
        void createPlayerShip(Utils::Vector2D p,Utils::Vector2D s,int healthpoints);
        void createBullet(Utils::Vector2D p,Utils::Vector2D s,double speed);
        static ObjectMaker& getInstance(){
                static ObjectMaker    instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
       void setup(Game*);

private:
        Game* g;
        ObjectMaker(){};
        ObjectMaker(ObjectMaker const&);
        ObjectMaker& operator=(ObjectMaker const&);

};
}

#endif // SPACE_INVADERS_OBJECTMAKER_H
