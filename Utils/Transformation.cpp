//
// Created by wannes on 14.12.19.
//
#include "Transformation.h"
#include "Vector2D.h"
#include <iostream>

Utils::Vector2D Utils::Transformation::trans(Utils::Vector2D m, Utils::Vector2D w) {
        return Utils::Vector2D((((m.x+4))/8)*w.x,(((m.y+3))/6)*w.y);
}
Utils::Vector2D Utils::Transformation::transAndCenter(Utils::Vector2D m, Utils::Vector2D w, Utils::Vector2D s)
{
        return trans(center(m,s),w);
}
Utils::Vector2D Utils::Transformation::center(Utils::Vector2D m, Utils::Vector2D s) {
        return Utils::Vector2D(m.x-(s.x/2),m.y-(s.y/2));
}
