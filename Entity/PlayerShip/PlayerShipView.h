//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPVIEW_H
#define SPACE_INVADERS_PLAYERSHIPVIEW_H

#include "../EntityView.h"
namespace Entity{
/**
 * \brief View class for PlayerShip this class handles the visual aspect of the game
 */
class PlayerShipView : public EntityView
{

public:
        /**
         * \brief draws the shape on the sf::RenderWindow w
         * @param w the window where the shape gets drawn on.
         */
        void draw(sf::RenderWindow& w);
        /**
         * \brief basic contructor for playership sets the shape to the standard square
         */
        PlayerShipView();
};
}

#endif // SPACE_INVADERS_PLAYERSHIPVIEW_H
