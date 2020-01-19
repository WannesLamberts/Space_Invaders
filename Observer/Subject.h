//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_SUBJECT_H
#define SPACE_INVADERS_SUBJECT_H

#include "../Utils/Vector2D.h"
#include "Observer.h"
#include <memory>
#include <vector>
/**
 * \brief the subject of the observerpattern
 */
class Subject
{
protected:
        /**
         * \brief the vector with all the observers in
         */
        std::vector<std::shared_ptr<Observer>> observers;

public:
        /**
         * \brief adds a new observer
         * @param o adds o the the observers
         */
        void registerObserver(std::shared_ptr<Observer> o);
        /**
         * \brief removes an observer from observers
         * @param o the observer to be removed
         */
        void removeObserver(std::shared_ptr<Observer> o);
        /**
         * \brief does the update function from all observers
         */
        virtual void notifyObservers() = 0;
};

#endif // SPACE_INVADERS_SUBJECT_H
