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
namespace Utils {

/**
 * \brief manages all the objects of the game
 */
class ObjectManager
{
public:
        /**
         * \brief creates a playership and places it in the object vector
         * @param position the position of the playership
         * @param size the size of the playership
         * @param healthpoints the healthpoints of the playership
         * @param speed the speed of the playership
         */
        void createPlayerShip(Utils::Vector2D position, Utils::Vector2D size, int healthpoints, double speed);
        /**
         * \brief creates an alienship and places it in the object vector
         * @param position the position of the alienship
         * @param size the size of the alienship
         * @param healthpoints the healthpoints of the alienship
         * @param speed the speed of the alienship
         */
        void createAlienShip(Utils::Vector2D position, Utils::Vector2D size, int healthpoints, double speed);
        /**
         * \brief create a bullet and places it in the object vector
         * @param position the position of the bullet
         * @param size the size of the bullet
         * @param speed the speed of the bullet
         * @param friendly is the bullet from the player or not
         */
        void createBullet(Utils::Vector2D position, Utils::Vector2D size, double speed, bool friendly);
        /**
         * \brief creates a shield and places it in the object vector
         * @param position the position of the shield
         * @param size the size of the shield
         * @param healthpoints the healthpoints of the shield
         */
        void createShield(Utils::Vector2D position, Utils::Vector2D size, int healthpoints);
        /**
         * \brief This is the only way to get a reference to the Objectmanager object and there can only exist 1 object
         * of Objectmanager;
         * @return the reference to the Objectmanager object
         */
        static ObjectManager& getInstance()
        {
                static ObjectManager instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
        /**
         * \brief sets enemycount to 0 and sets g to game
         * @param game the pointer g get's set to
         */
        void setup(Game* game);
        /**
         * \brief getter for the hero
         * @return the hero
         */
        const std::shared_ptr<Entity::PlayerShipController>& getHero() const;
        /**
         * \brief setter for enemycount
         * @param enemycount sets enemycount to enemycount
         */
        void setEnemycount(int enemycount);
        /**
         * \brief getter for enemycount
         * @return the enemycount
         */
        int getEnemycount() const;
        /**
         * \brief getter for visuals
         * @return visuals
         */
        const std::vector<std::shared_ptr<ViewAbstract>>& getVisuals() const;
        /**
         * \brief adds controller to objectsToDelete
         * @param controller the controller to be added
         */
        void addDeletion(std::shared_ptr<ControllerAbstract> controller);
        /**
         * \brief removes all objects from o that have an controller in objectsToDelete so that these objects will be
         * deleted since there are no more pointers to the objects
         */
        void deleteObjects();
        /**
         * \brief removes an object from o that has controller as controller
         * @param controller the controller that is the controller of an object that needs to be removed
         */
        void deleteObject(std::shared_ptr<ControllerAbstract> controller);
        /**
         * \brief deletes an object out of o
         * @param i the index of the object to delete in the vector o
         */
        void deleteob(int i);
        /**
         * \brief adds an object to o
         * @param object object that needs to be addded
         */
        void addObject(std::shared_ptr<Utils::Object> object);
        /**
         * \brief getter of o
         * @return o
         */
        const std::vector<std::shared_ptr<Utils::Object>>& getO() const;
        /**
         * \brief getter for game
         * @return game*
         */
        Game* getG() const;
private:
        /**
         * \brief the controllers that needs to be deleted after a game tick
         */
        std::vector<std::shared_ptr<ControllerAbstract>> objectsToDelete;
        /**
         * \brief visuals that needs to be drawn on the window
         */
        std::vector<std::shared_ptr<ViewAbstract>> visuals;
        /**
         * \brief a pointer to the player
         */
        std::shared_ptr<Entity::PlayerShipController> hero;
        /**
         * \brief the amount of enemies left in the level if this is 0 go to the next level or end the game
         */
        int enemycount;
        /**
         * \brief a vector that holds all the objects of the game
         */
        std::vector<std::shared_ptr<Utils::Object>> o;
        /**
         * \brief a pointer to the game
         */
        Game* g;
        /**
         * \brief Constructor is made private so it can't be called
         */
        ObjectManager(){};
        /**
         * \brief Copy constructor is made private so it can't be called
         */
        ObjectManager(ObjectManager const&);
        /**
         * \brief Copy assignemmt is made private so it can't be called
         */
        ObjectManager& operator=(ObjectManager const&);
};
} // namespace Utils

#endif // SPACE_INVADERS_OBJECTMANAGER_H
