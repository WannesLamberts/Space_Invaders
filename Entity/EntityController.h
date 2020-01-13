//
// Created by student on 19.12.19.
//

#ifndef SPACE_INVADERS_ENTITYCONTROLLER_H
#define SPACE_INVADERS_ENTITYCONTROLLER_H

#include "../MVCAbstract/ControllerAbstract.h"
#include "EntityModel.h"
#include "EntityView.h"
#include <memory>
namespace Entity {

class EntityController : public ControllerAbstract
{
public:
        EntityController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        virtual void tick() = 0;
};

}
#endif //SPACE_INVADERS_ENTITYCONTROLLER_H
