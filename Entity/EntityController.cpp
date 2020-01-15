//
// Created by student on 19.12.19.
//

#include "EntityController.h"

#include <iostream>

Entity::EntityController::EntityController(const std::shared_ptr<ModelAbstract>& m,
                                           const std::shared_ptr<ViewAbstract>& v)
    : ControllerAbstract(m, v)
{
        std::shared_ptr<Entity::EntityModel> mod = std::dynamic_pointer_cast<Entity::EntityModel>(m);
        std::shared_ptr<Entity::EntityView> view = std::dynamic_pointer_cast<Entity::EntityView>(v);
        view->changeScale(mod->getSize());
        mod->notifyObservers();
}
