//
// Created by wannes on 22.12.19.
//

#include "AliveController.h"
#include "../../../Utils/ObjectManager.h"
#include <iostream>


Entity::AliveController::AliveController(const std::shared_ptr<ModelAbstract>& m,
                                         const std::shared_ptr<ViewAbstract>& v)
    : Entity::CollidableController(m, v)
{
}
