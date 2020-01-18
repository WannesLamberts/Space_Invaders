//
// Created by wannes on 21.12.19.
//

#include "BulletController.h"
#include "../../../Utils/ObjectManager.h"
#include <iostream>
void Entity::BulletController::tick()
{
        if (std::dynamic_pointer_cast<BulletModel>(m)->travel()) {
                CollidableController::tick();
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
        if (std::dynamic_pointer_cast<Entity::EnemyController>(b) &&
            std::dynamic_pointer_cast<Entity::BulletModel>(m)->isFriendly()) {
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                std::shared_ptr<Entity::EnemyModel> enemymodel =
                    std::dynamic_pointer_cast<Entity::EnemyModel>(b->getM());
                enemymodel->setHealthpoints(enemymodel->getHealthpoints() - 1);
                if (enemymodel->getHealthpoints() == 0) {
                      std::shared_ptr<Entity::PlayerShipModel> modelp= std::dynamic_pointer_cast<Entity::PlayerShipModel>(Utils::ObjectManager::getInstance().getHero()->getM());
                       modelp->setScore(modelp->getScore()+50);
                        Utils::ObjectManager::getInstance().addDeletion(b);
                        Utils::ObjectManager::getInstance().setEnemycount(
                            Utils::ObjectManager::getInstance().getEnemycount() - 1);
                }
        } else if (std::dynamic_pointer_cast<Entity::PlayerShipController>(b) &&
                   !std::dynamic_pointer_cast<Entity::BulletModel>(m)->isFriendly()) {
                std::shared_ptr<Entity::PlayerShipModel> model = std::dynamic_pointer_cast<Entity::PlayerShipModel>(
                    std::dynamic_pointer_cast<Entity::PlayerShipController>(b)->getM());
                model->setHealthpoints(model->getHealthpoints() - 1);
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                 if (model->getHealthpoints() == 0){
                         Utils::ObjectManager::getInstance().getG()->setEnd(true);
                 }
        }
        else if(std::dynamic_pointer_cast<Entity::ShieldController>(b)){
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                std::shared_ptr<Entity::ShieldModel> model = std::dynamic_pointer_cast<Entity::ShieldModel>(
                    std::dynamic_pointer_cast<Entity::ShieldController>(b)->getM());
                model->setHealthpoints(model->getHealthpoints()-1);
                if(model->getHealthpoints()==0){
                        Utils::ObjectManager::getInstance().addDeletion(b);
                }
        }
}
