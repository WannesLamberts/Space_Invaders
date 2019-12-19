//
// Created by student on 16.12.19.
//

#include "Subject.h"

void Subject::registerObserver(std::shared_ptr<Observer> o) {
    observers.push_back(o);
}

void Subject::removeObserver(std::shared_ptr<Observer> o) {
    for (int i = 0; i < observers.size(); ++i) {
        if(observers[i]==o){
            observers.erase(observers.begin()+i);
        }
    }
}

