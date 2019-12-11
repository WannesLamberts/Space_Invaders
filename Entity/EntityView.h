//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYVIEW_H
#define SPACE_INVADERS_ENTITYVIEW_H

#include "../MVCAbstract/ViewAbstract.h"
class EntityView : public ViewAbstract {
private:
    sf::Drawable* shape;
public:
    sf::Drawable *getShape() const;

    void setShape(sf::Drawable *shape);


    virtual void draw(sf::RenderWindow & w)=0;

};


#endif //SPACE_INVADERS_ENTITYVIEW_H
