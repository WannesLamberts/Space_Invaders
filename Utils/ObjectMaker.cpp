//
// Created by wannes on 21.12.19.
//

#include "ObjectMaker.h"
void Utils::ObjectMaker::createPlayerShip(Utils::Vector2D p, Utils::Vector2D s, int healthpoints)
{
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::PlayerShipView>(g->getW());
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::PlayerShipModel>(p, s, healthpoints);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::PlayerShipController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        g->addObject(obj);
}
void Utils::ObjectMaker::setup(Game* game) {
        g=game;
}
void Utils::ObjectMaker::createBullet(Utils::Vector2D p, Utils::Vector2D s, double speed) {
        std::shared_ptr<ViewAbstract> v = std::make_shared<Entity::BulletView>(g->getW());
        std::shared_ptr<ModelAbstract> m = std::make_shared<Entity::BulletModel>(p, s, speed);
        m->registerObserver(v);
        std::shared_ptr<ControllerAbstract> c = std::make_shared<Entity::BulletController>(m, v);
        std::shared_ptr<Utils::Object> obj = std::make_shared<Utils::Object>(v, m, c);
        g->addObject(obj);

}
