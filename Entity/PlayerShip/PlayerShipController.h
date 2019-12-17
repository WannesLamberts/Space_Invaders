//
// Created by wannes on 17.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#define SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
#include <SFML/Graphics.hpp>
#include "../../MVCAbstract/Controllable.h"
#include "PlayerShipModel.h"
#include "PlayerShipView.h"
namespace Entity{


class PlayerShipController: public Controllable
{
public:
        void readInput();
        PlayerShipController(PlayerShipModel* m, PlayerShipView* v);

private:
        PlayerShipModel* m;
        PlayerShipView* v;
};
}
#endif // SPACE_INVADERS_PLAYERSHIPCONTROLLER_H
