//
// Created by wannes on 22.12.19.
//

#include "AlienShipController.h"
#include <iostream>
Entity::AlienShipController::AlienShipController(const std::shared_ptr<ModelAbstract>& m,
                                         const std::shared_ptr<ViewAbstract>& v)
    : AliveController(m, v)
{
}
void Entity::AlienShipController::tick() {

}
