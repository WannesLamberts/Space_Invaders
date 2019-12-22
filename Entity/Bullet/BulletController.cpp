//
// Created by wannes on 21.12.19.
//

#include "BulletController.h"
#include "../../Utils/ObjectManager.h"
#include "../Alive/AlienShip/AlienShipController.h"
#include <iostream>
void Entity::BulletController::tick() {
        std::dynamic_pointer_cast<BulletModel>(m)->travel();
        for (int i = 0; i < Utils::ObjectManager::getInstance().getColliders().size(); ++i) {
                if(checkCollision(Utils::ObjectManager::getInstance().getColliders()[i]))
                        onCollision(Utils::ObjectManager::getInstance().getColliders()[i]);
        }
}
Entity::BulletController::BulletController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : EntityController(m, v)
{

}
void Entity::BulletController::onCollision(std::shared_ptr<Entity::EntityController> b)
{
        if( std::dynamic_pointer_cast<Entity::AlienShipController>(b)){
                Utils::ObjectManager::getInstance().deleteObject(b);
                std::cout<<"HT"<<std::endl;
        }
}
