//
// Created by wannes on 13.01.20.
//

#include "CollidableController.h"
#include "../../Utils/ObjectManager.h"
bool Entity::CollidableController::checkCollision(std::shared_ptr<Entity::CollidableController> b)
{
        std::shared_ptr<Entity::EntityModel> mod = std::dynamic_pointer_cast<Entity::EntityModel>(m);
        std::shared_ptr<Entity::EntityModel> modb = std::dynamic_pointer_cast<Entity::EntityModel>(b->m);
        return (mod->getPosition().x + mod->getSize().x / 2 >= modb->getPosition().x - modb->getSize().x / 2 &&
                mod->getPosition().x - mod->getSize().x / 2 <= modb->getPosition().x + modb->getSize().x / 2 &&
                mod->getPosition().y + mod->getSize().y / 2 >= modb->getPosition().y - modb->getSize().y / 2 &&
                mod->getPosition().y - mod->getSize().y / 2 <= modb->getPosition().y + modb->getSize().y / 2);
}
void Entity::CollidableController::onCollision(std::shared_ptr<Entity::CollidableController> b) {}
Entity::CollidableController::CollidableController(const std::shared_ptr<ModelAbstract>& m,
                                                   const std::shared_ptr<ViewAbstract>& v)
    : EntityController(m, v)
{
}
void Entity::CollidableController::tick()
{
        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                if (std::dynamic_pointer_cast<Entity::CollidableController>(
                        Utils::ObjectManager::getInstance().getO()[i]->c) &&
                    checkCollision(std::dynamic_pointer_cast<Entity::CollidableController>(
                        Utils::ObjectManager::getInstance().getO()[i]->c))) {
                        onCollision(std::dynamic_pointer_cast<Entity::CollidableController>(
                            Utils::ObjectManager::getInstance().getO()[i]->c));
                }
        }
}
