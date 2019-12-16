//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_SUBJECT_H
#define SPACE_INVADERS_SUBJECT_H

#include "Observer.h"
#include <vector>
class Subject {
protected:
    std::vector<Observer*> observers;
public:
 void registerObserver(Observer* o);
 void removeObserver(Observer* o);
 virtual void notifyObservers(double,double)=0;
};


#endif //SPACE_INVADERS_SUBJECT_H
