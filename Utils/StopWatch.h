//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_STOPWATCH_H
#define SPACE_INVADERS_STOPWATCH_H

#include <chrono>
namespace Utils {
/**
 * \brief a stopwatch used for the main game loop
 */
class StopWatch
{
public:
        /**
         * \brief This is the only way to get a reference to the Stopwatch object and there can only exist 1 object
         * of Stopwatch;
         * @return the reference to the Stopwatch object
         */
        static StopWatch& getInstance()
        {
                static StopWatch instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
        /**
         * \brief starts the stopwatch
         */
        void start();
        /**
         * \brief calculates the time that has been passed since it has started
         * @return the passed time
         */
        double elapsed();

private:
        /**
         * \brief Constructor is made private so it can't be called
         */
        StopWatch(){};
        /**
         * \brief Copy constructor is made private so it can't be called
         */
        StopWatch(StopWatch const&);
        /**
         * \brief Copy assignemmt is made private so it can't be called
         */
        StopWatch& operator=(StopWatch const&);
        /**
         * \brief the start time of the stopwatch
         */
        std::chrono::time_point<std::chrono::system_clock> begin;
};
} // namespace Utils

#endif // SPACE_INVADERS_STOPWATCH_H
