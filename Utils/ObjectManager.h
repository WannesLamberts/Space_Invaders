//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECTMANAGER_H
#define SPACE_INVADERS_OBJECTMANAGER_H
#include "../Game.h"
#include "../Entity/Alive/PlayerShip/PlayerShipController.h"
#include "../Entity/Bullet/BulletController.h"
#include "../Entity/Alive/AlienShip/AlienShipController.h"
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
        std::vector<std::shared_ptr<Entity::EntityController>> colliders;
        std::vector<std::shared_ptr<Entity::EntityController>> objectsToDelete;
        std::vector<std::shared_ptr<Utils::Object>> o;
public:
        const std::vector<std::shared_ptr<Entity::EntityController>>& getTemp() const;
        void deleteob(int i);
        void addObject(std::shared_ptr<Utils::Object>);
        const std::vector<std::shared_ptr<Utils::Object>>& getO() const;

public:
        void addDeletion(std::shared_ptr<Entity::EntityController>);
        void deleteObjects();
        const std::vector<std::shared_ptr<Entity::EntityController>>& getColliders() const;
        void deleteCollider(std::shared_ptr<Entity::EntityController> c);
        void deleteObject(std::shared_ptr<Entity::EntityController> c);
private:
        Game* g;
        ObjectManager(){};
        ObjectManager(ObjectManager const&);
        ObjectManager& operator=(ObjectManager const&);
};
}

#endif // SPACE_INVADERS_OBJECTMANAGER_H
