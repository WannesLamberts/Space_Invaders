//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_VIEWABSTRACT_H
#define SPACE_INVADERS_VIEWABSTRACT_H

#include <SFML/Graphics.hpp>
#include "Observer.h"
#include <memory>
/**
 * \brief superclass of all view classes handles the visual aspect of the game
 */
class ViewAbstract : public Observer {
public:
    std::__shared_ptr<sf::RenderWindow> w;
public:
    ViewAbstract(const std::__shared_ptr<sf::RenderWindow> &w);

/**
     * \brief draws a sf::Drawable on a window
     * @param w the window where the drawable gets drawn on
     */
    virtual void draw(std::shared_ptr<sf::RenderWindow> w) = 0;

};

#endif // SPACE_INVADERS_VIEWABSTRACT_H
