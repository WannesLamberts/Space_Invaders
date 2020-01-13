//
// Created by wannes on 21.12.19.
//

#include "BulletController.h"
#include "../../../Utils/ObjectManager.h"
#include "../../Collidable/Alive/AlienShip/AlienShipController.h"
#include <iostream>
void Entity::BulletController::tick() {
        std::dynamic_pointer_cast<BulletModel>(m)->travel();
        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                if(std::dynamic_pointer_cast<Entity::CollidableController>(Utils::ObjectManager::getInstance().getO()[i]->c)
                    && checkCollision(std::dynamic_pointer_cast<Entity::CollidableController>(Utils::ObjectManager::getInstance().getO()[i]->c) )){
                        onCollision(std::dynamic_pointer_cast<Entity::CollidableController>(Utils::ObjectManager::getInstance().getO()[i]->c));
                }
}
}
Entity::BulletController::BulletController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : CollidableController(m, v)
{

}
void Entity::BulletController::onCollision(std::shared_ptr<Entity::CollidableController> b)
{
        if( std::dynamic_pointer_cast<Entity::AlienShipController>(b)){
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                Utils::ObjectManager::getInstance().addDeletion(b);
                std::cout<<"HT"<<std::endl;
        }
}
