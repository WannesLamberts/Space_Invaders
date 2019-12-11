//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_VIEWABSTRACT_H
#define SPACE_INVADERS_VIEWABSTRACT_H
#include <SFML/Graphics.hpp>

class ViewAbstract {

public:
   virtual void draw(sf::RenderWindow & w)=0;
};


#endif //SPACE_INVADERS_VIEWABSTRACT_H
