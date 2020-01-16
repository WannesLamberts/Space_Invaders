#include "ViewAbstract.h"
#include <SFML/Graphics/RenderWindow.hpp>
//
// Created by wannes on 15.12.19.
//
ViewAbstract::ViewAbstract(const std::__shared_ptr<sf::RenderWindow> &w,std::shared_ptr<ModelAbstract> model) : w(w),model(model) {}
