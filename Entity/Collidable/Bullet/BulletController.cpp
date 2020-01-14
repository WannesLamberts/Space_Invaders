//
// Created by wannes on 21.12.19.
//

#include "BulletController.h"
#include "../../../Utils/ObjectManager.h"
#include "../../Collidable/Alive/AlienShip/AlienShipController.h"
#include <iostream>
void Entity::BulletController::tick()
{

        if (std::dynamic_pointer_cast<BulletModel>(m)->travel()) {
                for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                        if (std::dynamic_pointer_cast<Entity::CollidableController>(
                                Utils::ObjectManager::getInstance().getO()[i]->c) &&
                            checkCollision(std::dynamic_pointer_cast<Entity::CollidableController>(
                                Utils::ObjectManager::getInstance().getO()[i]->c))) {
                                onCollision(std::dynamic_pointer_cast<Entity::CollidableController>(
                                    Utils::ObjectManager::getInstance().getO()[i]->c));
                        }
                }
        } else {
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
        }
}
Entity::BulletController::BulletController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : CollidableController(m, v)
{
}
void Entity::BulletController::onCollision(std::shared_ptr<Entity::CollidableController> b)
{
        if (std::dynamic_pointer_cast<Entity::AlienShipController>(b) &&
            std::dynamic_pointer_cast<Entity::BulletModel>(m)->isFriendly()) {
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                Utils::ObjectManager::getInstance().addDeletion(b);
        } else if (std::dynamic_pointer_cast<Entity::PlayerShipController>(b) &&
                   !std::dynamic_pointer_cast<Entity::BulletModel>(m)->isFriendly()) {
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                std::shared_ptr<Entity::PlayerShipModel> model = std::dynamic_pointer_cast<Entity::PlayerShipModel>(
                    std::dynamic_pointer_cast<Entity::PlayerShipController>(b)->getM());
                model->setHealthpoints(model->getHealthpoints() - 1);
                std::cout<<model->getHealthpoints()<<std::endl;
                if (model->getHealthpoints() == 0)
                        std::cout << "Game over" << std::endl;
        }
}
