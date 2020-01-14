//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIVECONTROLLER_H
#define SPACE_INVADERS_ALIVECONTROLLER_H
#include "../../Collidable/CollidableController.h"
#include "AliveModel.h"
namespace Entity{


class AliveController : public Entity::CollidableController
{
public:
        AliveController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);

};
}
#endif // SPACE_INVADERS_ALIVECONTROLLER_H
