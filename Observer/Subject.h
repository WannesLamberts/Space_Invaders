//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_SUBJECT_H
#define SPACE_INVADERS_SUBJECT_H

#include "../Utils/Vector2D.h"
#include "Observer.h"
#include <memory>
#include <vector>
class Subject {
protected:
    std::vector<std::shared_ptr<Observer>> observers;
public:
 void registerObserver(std::shared_ptr<Observer> o);
 void removeObserver(std::shared_ptr<Observer> o);
 void removeallObservers();
 virtual void notifyObservers()=0;
};


#endif //SPACE_INVADERS_SUBJECT_H
