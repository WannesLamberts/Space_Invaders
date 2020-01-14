//
// Created by wannes on 22.12.19.
//

#ifndef SPACE_INVADERS_ALIENSHIPCONTROLLER_H
#define SPACE_INVADERS_ALIENSHIPCONTROLLER_H
#include "../AliveController.h"
#include "AlienShipView.h"
#include "AlienShipModel.h"
#include <stdlib.h>
#include <time.h>

namespace Entity{


class AlienShipController : public Entity::AliveController
{
public:
        AlienShipController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
        void tick();
        void shoot();
};
}
#endif // SPACE_INVADERS_ALIENSHIPCONTROLLER_H
