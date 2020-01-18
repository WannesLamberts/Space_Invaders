//
// Created by wannes on 18.01.20.
//

#include "EnemyController.h"
#include "../../../../Utils/ObjectManager.h"
Entity::EnemyController::EnemyController(const std::shared_ptr<ModelAbstract>& m,
                                         const std::shared_ptr<ViewAbstract>& v)
    : AliveController(m, v)
{
}
void Entity::EnemyController::tick() {
        if (std::dynamic_pointer_cast<Entity::EnemyModel>(m)->isRight()) {
                if (!std::dynamic_pointer_cast<Entity::EnemyModel>(m)->moveRight()) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                if(std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)){
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)->setRight(false);
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)->moveDown();
                                }

                        }
                }
        } else {
                if (!std::dynamic_pointer_cast<Entity::AlienShipModel>(m)->moveLeft()) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                if(std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)){
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)->setRight(true);
                                        std::dynamic_pointer_cast<Entity::EnemyModel>(Utils::ObjectManager::getInstance().getO()[i]->m)->moveDown();
                                }

                        }
                }
        }
}
