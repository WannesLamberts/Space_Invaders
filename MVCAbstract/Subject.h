//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_SUBJECT_H
#define SPACE_INVADERS_SUBJECT_H

#include "Observer.h"
#include <vector>
#include <memory>
class Subject {
protected:
    std::vector<std::shared_ptr<Observer>> observers;
public:
 void registerObserver(std::shared_ptr<Observer> o);
 void removeObserver(std::shared_ptr<Observer> o);
 virtual void notifyObservers(double,double)=0;
};


#endif //SPACE_INVADERS_SUBJECT_H
