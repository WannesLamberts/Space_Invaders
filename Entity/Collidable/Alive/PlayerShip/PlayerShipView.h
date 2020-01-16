//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPVIEW_H
#define SPACE_INVADERS_PLAYERSHIPVIEW_H

#include "../../../EntityView.h"
namespace Entity{
/**
 * \brief View class for PlayerShip this class handles the visual aspect of the game
 */
class PlayerShipView : public EntityView
{

public:
    PlayerShipView(const std::__shared_ptr<sf::RenderWindow> &w,std::shared_ptr<ModelAbstract> model);


        /**
         * \brief basic contructor for playership sets the shape to the standard square
         */
        void generateShape();
        /**
     * \brief The texture that will be drawn on te sf::sprite shape
     */
        sf::Texture texture;
};
}

#endif // SPACE_INVADERS_PLAYERSHIPVIEW_H
