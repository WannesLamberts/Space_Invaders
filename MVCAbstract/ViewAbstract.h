//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_VIEWABSTRACT_H
#define SPACE_INVADERS_VIEWABSTRACT_H
#include <SFML/Graphics.hpp>
/**
 * \brief superclass of all view classes handles the visual aspect of the game
 */
class ViewAbstract
{
private:
        sf::RenderWindow* w;

public:
        sf::RenderWindow* getW() const;
        void setW(sf::RenderWindow* w);

public:
        /**
         * \brief draws a sf::Drawable on a window
         * @param w the window where the drawable gets drawn on
         */
        virtual void draw(sf::RenderWindow& w) = 0;
        virtual void update(double,double)=0;


};

#endif // SPACE_INVADERS_VIEWABSTRACT_H
