//
// Created by wannes on 21.12.19.
//

#include "ObjectManager.h"
void Utils::ObjectManager::createPlayerShip(Utils::Vector2D p, Utils::Vector2D s, int healthpoints,double speed)
{

        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::PlayerShipModel>(p, s, healthpoints,speed);
        std::shared_ptr<ViewAbstract> l=std::make_shared<Entity::LifeView>(g->getW(),m);
        std::shared_ptr<ViewAbstract> player=std::make_shared<Entity::PlayerScoreView>(g->getW(),m);
        visuals.push_back(l);
        visuals.push_back(player);
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::PlayerShipView>(g->getW(),m);
        m->registerObserver(v);
        m->registerObserver(l);
        m->registerObserver(player);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::PlayerShipController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        addObject(obj);
        hero=std::dynamic_pointer_cast<Entity::PlayerShipController>(c);
}
void Utils::ObjectManager::setup(Game* game) {
        g=game;
        enemycount=0;
}
void Utils::ObjectManager::createBullet(Utils::Vector2D p, Utils::Vector2D s, double speed, bool friendly) {
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::BulletModel>(p, s, speed,friendly);
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::BulletView>(g->getW(),m);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::BulletController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        addObject(obj);
}
void Utils::ObjectManager::createShield(Utils::Vector2D p, Utils::Vector2D s, int healthpoints) {
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::ShieldModel>(p, s, healthpoints);
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::ShieldView>(g->getW(),m);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::ShieldController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        addObject(obj);
}

void Utils::ObjectManager::createAlienShip(Utils::Vector2D p, Utils::Vector2D s, int healthpoints,double speed) {
    std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::AlienShipModel>(p, s, healthpoints,speed);
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::AlienShipView>(g->getW(),m);

        m->registerObserver(v);
    std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::AlienShipController>(m, v);
    std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
    addObject(obj);
    enemycount++;
}
void Utils::ObjectManager::deleteObject(std::shared_ptr<ControllerAbstract> c) {
        for (int i = 0; i < o.size(); ++i) {
                if(o[i]->c==c){
                        deleteob(i);
                }
        }
}
void Utils::ObjectManager::addDeletion(std::shared_ptr<ControllerAbstract> v) {
        objectsToDelete.push_back(v);
}
void Utils::ObjectManager::deleteob(int i) {
        o.erase(o.begin()+i);

}
const std::vector<std::shared_ptr<Utils::Object>>& Utils::ObjectManager::getO() const { return o; }
void Utils::ObjectManager::addObject(std::shared_ptr<Utils::Object> obj) {
        o.push_back(obj);
}
void Utils::ObjectManager::deleteObjects() {
        for (int i = 0; i < objectsToDelete.size(); ++i) {
                deleteObject(objectsToDelete[i]);
        }
        objectsToDelete.clear();
}
const std::vector<std::shared_ptr<ViewAbstract>>& Utils::ObjectManager::getVisuals() const { return visuals; }
int Utils::ObjectManager::getEnemycount() const { return enemycount; }
void Utils::ObjectManager::setEnemycount(int enemycount) { ObjectManager::enemycount = enemycount; }
const std::shared_ptr<Entity::PlayerShipController>& Utils::ObjectManager::getHero() const { return hero; }
Game* Utils::ObjectManager::getG() const { return g; }
