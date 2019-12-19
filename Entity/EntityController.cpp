//
// Created by student on 19.12.19.
//

#include "EntityController.h"

EntityController::EntityController(const std::shared_ptr<ModelAbstract> &m, const std::shared_ptr<ViewAbstract> &v)
        : ControllerAbstract(m, v) {}
