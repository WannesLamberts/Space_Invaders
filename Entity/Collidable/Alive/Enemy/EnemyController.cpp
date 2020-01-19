//
// Created by wannes on 18.01.20.
//

#include "EnemyController.h"
#include "../../../../Utils/ObjectManager.h"
#include <iostream>
Entity::EnemyController::EnemyController(const std::shared_ptr<ModelAbstract>& m,
                                         const std::shared_ptr<ViewAbstract>& v)
    : AliveController(m, v)
{
}
void Entity::EnemyController::tick()
{
        if (std::dynamic_pointer_cast<Entity::EnemyModel>(m)->isRight()) {
                if (!std::dynamic_pointer_cast<Entity::EnemyModel>(m)->moveRight()) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                if (std::dynamic_pointer_cast<Entity::EnemyModel>(
                                        Utils::ObjectManager::getInstance().getO()[i]->m)) {
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(
                                            Utils::ObjectManager::getInstance().getO()[i]->m)
                                            ->setRight(false);

                                        if (!std::dynamic_pointer_cast<Entity::EnemyModel>(
                                                 Utils::ObjectManager::getInstance().getO()[i]->m)
                                                 ->moveDown()) {
                                                Utils::ObjectManager::getInstance().getG()->setEnd(true);
                                        }
                                }
                        }
                }

        } else {
                if (!std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveLeft()) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                if (std::dynamic_pointer_cast<Entity::EnemyModel>(
                                        Utils::ObjectManager::getInstance().getO()[i]->m)) {
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(
                                            Utils::ObjectManager::getInstance().getO()[i]->m)
                                            ->setRight(true);
                                        if (!std::dynamic_pointer_cast<Entity::EnemyModel>(
                                                 Utils::ObjectManager::getInstance().getO()[i]->m)
                                                 ->moveDown()) {
                                                Utils::ObjectManager::getInstance().getG()->setEnd(true);
                                        }
                                }
                        }
                }
        }
        CollidableController::tick();
}
void Entity::EnemyController::onCollision(std::shared_ptr<Entity::CollidableController> b)
{
        if (std::dynamic_pointer_cast<Entity::PlayerShipController>(b)) {
                Utils::ObjectManager::getInstance().getG()->setEnd(true);
        }
        if (std::dynamic_pointer_cast<Entity::ShieldController>(b)) {
                Utils::ObjectManager::getInstance().addDeletion(shared_from_this());
                Utils::ObjectManager::getInstance().setEnemycount(Utils::ObjectManager::getInstance().getEnemycount() -
                                                                  1);
                std::shared_ptr<Entity::ShieldModel> model = std::dynamic_pointer_cast<Entity::ShieldModel>(
                    std::dynamic_pointer_cast<Entity::ShieldController>(b)->getM());
                model->setHealthpoints(model->getHealthpoints() - 1);
                if (model->getHealthpoints() == 0) {
                        Utils::ObjectManager::getInstance().addDeletion(b);
                }
        }
}
