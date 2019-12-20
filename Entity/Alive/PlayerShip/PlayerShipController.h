//
// Created by wannes on 17.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#define SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#include "../../../MVCAbstract/Controllable.h"
#include "../../EntityController.h"
#include "PlayerShipModel.h"
#include <SFML/Graphics.hpp>
namespace Entity{


class PlayerShipController: public Controllable,EntityController
{
public:
        void readInput();
        PlayerShipController(const std::shared_ptr<ModelAbstract>& m, const std::shared_ptr<ViewAbstract>& v);
};
}
#endif // SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
