#include "ViewAbstract.h"
#include <SFML/Graphics/RenderWindow.hpp>
//
// Created by wannes on 15.12.19.
//
sf::RenderWindow* ViewAbstract::getW() const { return w; }
void ViewAbstract::setW(sf::RenderWindow* w) { ViewAbstract::w = w; }
