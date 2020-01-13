//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECTMANAGER_H
#define SPACE_INVADERS_OBJECTMANAGER_H
#include "../Game.h"
#include "../Entity/Collidable/Alive/PlayerShip/PlayerShipController.h"
#include "../Entity/Collidable/Bullet/BulletController.h"
#include "../Entity/Collidable/Alive/AlienShip/AlienShipController.h"
namespace Utils{


class ObjectManager
{
public:
        void createPlayerShip(Utils::Vector2D p,Utils::Vector2D s,int healthpoints,double speed);
        void createAlienShip(Utils::Vector2D p,Utils::Vector2D s,int healthpoints, double speed);
        void createBullet(Utils::Vector2D p,Utils::Vector2D s,double speed);
        static ObjectManager& getInstance(){
                static ObjectManager instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
       void setup(Game*);
private:
        std::vector<std::shared_ptr<ControllerAbstract>> objectsToDelete;
        std::vector<std::shared_ptr<Utils::Object>> o;
public:
        void deleteob(int i);
        void addObject(std::shared_ptr<Utils::Object>);
        const std::vector<std::shared_ptr<Utils::Object>>& getO() const;

public:
        void addDeletion(std::shared_ptr<ControllerAbstract>);
        void deleteObjects();
        void deleteObject(std::shared_ptr<ControllerAbstract> c);
private:
        Game* g;
        ObjectManager(){};
        ObjectManager(ObjectManager const&);
        ObjectManager& operator=(ObjectManager const&);
};
}

#endif // SPACE_INVADERS_OBJECTMANAGER_H
