//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETVIEW_H
#define SPACE_INVADERS_BULLETVIEW_H
#include "../../EntityView.h"
namespace Entity{


class BulletView: public EntityView
{
public:
        BulletView(const std::__shared_ptr<sf::RenderWindow>& w);
        void generateShape();

};
}
#endif // SPACE_INVADERS_BULLETVIEW_H
