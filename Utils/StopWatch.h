//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_STOPWATCH_H
#define SPACE_INVADERS_STOPWATCH_H

#include <chrono>
namespace Utils{
class StopWatch {
public:
    static StopWatch& getInstance(){
        static StopWatch    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }
    void start();
    double elapsed();



private:
    StopWatch(){};
    StopWatch(StopWatch const&);
    StopWatch& operator=(StopWatch const&);
    std::chrono::time_point<std::chrono::system_clock> begin;
};
}

#endif //SPACE_INVADERS_STOPWATCH_H
