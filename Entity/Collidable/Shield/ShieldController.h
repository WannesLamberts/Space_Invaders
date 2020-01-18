//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_SHIELDCONTROLLER_H
#define SPACE_INVADERS_SHIELDCONTROLLER_H
#include "../CollidableController.h"
#include "ShieldModel.h"
#include "ShieldView.h"
namespace Entity{
class ShieldController: public Entity::CollidableController
{
public:
        ShieldController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        void tick();
        void onCollision(std::shared_ptr<Entity::CollidableController> b);
};
}
#endif // SPACE_INVADERS_SHIELDCONTROLLER_H
