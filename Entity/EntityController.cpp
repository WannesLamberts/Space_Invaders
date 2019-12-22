//
// Created by student on 19.12.19.
//

#include "EntityController.h"
#include "EntityModel.h"
#include "EntityView.h"
#include <iostream>

Entity::EntityController::EntityController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : ControllerAbstract(m, v)
{
        std::shared_ptr<Entity::EntityModel> mod = std::dynamic_pointer_cast<Entity::EntityModel>(m);
        std::shared_ptr<Entity::EntityView> view = std::dynamic_pointer_cast<Entity::EntityView>(v);
        view->changeScale(mod->getSize());
        mod->notifyObservers(mod->getPosition(), mod->getSize());
}
bool Entity::EntityController::checkCollision(std::shared_ptr<Entity::EntityController> b)
{
        std::shared_ptr<Entity::EntityModel> mod = std::dynamic_pointer_cast<Entity::EntityModel>(m);
        std::shared_ptr<Entity::EntityModel> modb = std::dynamic_pointer_cast<Entity::EntityModel>(b->m);
        return (mod->getPosition().x + mod->getSize().x/2 >= modb->getPosition().x-modb->getSize().x/2 &&
                mod->getPosition().x-mod->getSize().x/2 <= modb->getPosition().x + modb->getSize().x/2 &&
                mod->getPosition().y+mod->getSize().y/2>=modb->getPosition().y - modb->getSize().y/2 &&
                mod->getPosition().y-mod->getSize().y/2<=modb->getPosition().y+modb->getSize().y/2);

}
void Entity::EntityController::onCollision(std::shared_ptr<Entity::EntityController> b) {}
