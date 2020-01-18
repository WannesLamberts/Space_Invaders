//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_VIEWABSTRACT_H
#define SPACE_INVADERS_VIEWABSTRACT_H

#include "../Observer/Observer.h"
#include "ModelAbstract.h"
#include <SFML/Graphics.hpp>
#include <memory>
/**
 * \brief superclass of all view classes handles the visual aspect of the game
 */
class ViewAbstract : public Observer {
protected:
        std::shared_ptr<sf::Drawable> shape;
public:
    std::__shared_ptr<sf::RenderWindow> w;
public:
    ViewAbstract(const std::__shared_ptr<sf::RenderWindow> &w);

/**
     * \brief draws a sf::Drawable on a window
     * @param w the window where the drawable gets drawn on
     */
    virtual void draw()=0;

};

#endif // SPACE_INVADERS_VIEWABSTRACT_H
