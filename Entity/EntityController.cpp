//
// Created by student on 19.12.19.
//

#include "EntityController.h"
#include "EntityModel.h"

EntityController::EntityController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v)
    : ControllerAbstract(m, v)
{
        std::shared_ptr<Entity::EntityModel> mod = std::dynamic_pointer_cast<Entity::EntityModel>(m);
        mod->notifyObservers(mod->getXVal(), mod->getYVal());
}
