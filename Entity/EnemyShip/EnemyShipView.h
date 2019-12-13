//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENEMYSHIPVIEW_H
#define SPACE_INVADERS_ENEMYSHIPVIEW_H
#include "../EntityView.h"

/**
 * \brief View class for PlayerShip this class handles the visual aspect of the game
 */
class EnemyShipView: public EntityView {
public:
    /**
     * \brief draws the shape on the sf::RenderWindow w
     * @param w the window where the shape gets drawn on.
     */
    void draw(sf::RenderWindow & w);

    EnemyShipView();
};


#endif //SPACE_INVADERS_ENEMYSHIPVIEW_H
