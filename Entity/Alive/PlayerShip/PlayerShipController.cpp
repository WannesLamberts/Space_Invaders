//
// Created by wannes on 17.12.19.
//

#include "PlayerShipController.h"
#include "PlayerShipView.h"
#include "../../../Utils/ObjectMaker.h"
#include <iostream>
void Entity::PlayerShipController::readInput()
{
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveRight();
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
                std::dynamic_pointer_cast<PlayerShipModel>(m)->moveLeft();
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
                shoot();
        }
}
Entity::PlayerShipController::PlayerShipController(const std::shared_ptr<ModelAbstract>& m,
                                                   const std::shared_ptr<ViewAbstract>& v)
    : EntityController(m, v)
{
}
void Entity::PlayerShipController::tick() { readInput();

}
void Entity::PlayerShipController::shoot()
{
        std::cout<<"fire"<<std::endl;
        std::shared_ptr<PlayerShipModel> mod= std::dynamic_pointer_cast<PlayerShipModel>(m);
        Utils::ObjectMaker::getInstance().createBullet(Utils::Vector2D(mod->getPosition().x,mod->getPosition().y),Utils::Vector2D(0.2,0.2),0.3);

}
