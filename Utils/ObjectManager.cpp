//
// Created by wannes on 21.12.19.
//

#include "ObjectManager.h"
void Utils::ObjectManager::createPlayerShip(Utils::Vector2D p, Utils::Vector2D s, int healthpoints,double speed)
{
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::PlayerShipView>(g->getW());
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::PlayerShipModel>(p, s, healthpoints,speed);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::PlayerShipController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        g->addObject(obj);
        colliders.push_back(std::dynamic_pointer_cast<Entity::PlayerShipController>(c));
}
void Utils::ObjectManager::setup(Game* game) {
        g=game;
}
void Utils::ObjectManager::createBullet(Utils::Vector2D p, Utils::Vector2D s, double speed) {
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::BulletView>(g->getW());
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::BulletModel>(p, s, speed);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::BulletController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        g->addObject(obj);
        colliders.push_back(std::dynamic_pointer_cast<Entity::BulletController>(c));


}
void Utils::ObjectManager::createAlienShip(Utils::Vector2D p, Utils::Vector2D s, int healthpoints,double speed) {
    std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::AlienShipView>(g->getW());
    std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::AliveModel>(p, s, healthpoints,speed);
    m->registerObserver(v);
    std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::AlienShipController>(m, v);
    std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
    g->addObject(obj);
        colliders.push_back(std::dynamic_pointer_cast<Entity::AlienShipController>(c));

}
const std::vector<std::shared_ptr<Entity::EntityController>>& Utils::ObjectManager::getColliders() const
{
        return colliders;
}
void Utils::ObjectManager::deleteCollider(std::shared_ptr<Entity::EntityController> c) {
        for (int i = 0; i < colliders.size(); ++i) {
                if(c==colliders[i]){
                        colliders.erase(colliders.begin()+i);
                }
        }
}
void Utils::ObjectManager::deleteObject(std::shared_ptr<Entity::EntityController> c) {
        for (int i = 0; i < g->getO().size(); ++i) {
                if(g->getO()[i]->c==c){
                        g->deleteob(i);
                }
        }
        deleteCollider(c);
}
