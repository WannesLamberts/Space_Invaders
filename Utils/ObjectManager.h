//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_OBJECTMANAGER_H
#define SPACE_INVADERS_OBJECTMANAGER_H
#include "../Entity/Collidable/Alive/Enemy/AlienShip/AlienShipController.h"
#include "../Entity/Collidable/Alive/PlayerShip/LifeView.h"
#include "../Entity/Collidable/Alive/PlayerShip/PlayerScoreView.h"
#include "../Entity/Collidable/Alive/PlayerShip/PlayerShipController.h"
#include "../Entity/Collidable/Bullet/BulletController.h"
#include "../Entity/Collidable/Shield/ShieldController.h"

#include "../Game.h"
namespace Utils{


class ObjectManager
{
public:
        void createPlayerShip(Utils::Vector2D p,Utils::Vector2D s,int healthpoints,double speed);
        void createAlienShip(Utils::Vector2D p,Utils::Vector2D s,int healthpoints, double speed);
        void createBullet(Utils::Vector2D p,Utils::Vector2D s,double speed, bool friendly);
        void createShield(Utils::Vector2D p,Utils::Vector2D s,int healthpoints);
        static ObjectManager& getInstance(){
                static ObjectManager instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
       void setup(Game*);
private:
        std::vector<std::shared_ptr<ControllerAbstract>> objectsToDelete;
        std::vector<std::shared_ptr<ViewAbstract>> visuals;
        std::shared_ptr<Entity::PlayerShipController> hero;

public:
        const std::shared_ptr<Entity::PlayerShipController>& getHero() const;
private:
        int enemycount;

public:
        void setEnemycount(int enemycount);

public:
        int getEnemycount() const;

public:
        const std::vector<std::shared_ptr<ViewAbstract>>& getVisuals() const;
private:
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

public:
        Game* getG() const;
private:
        ObjectManager(){};
        ObjectManager(ObjectManager const&);
        ObjectManager& operator=(ObjectManager const&);
};
}

#endif // SPACE_INVADERS_OBJECTMANAGER_H
