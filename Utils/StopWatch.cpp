//
// Created by student on 16.12.19.
//

#include "StopWatch.h"
void Utils::StopWatch::start() { begin = std::chrono::high_resolution_clock::now(); }
double Utils::StopWatch::elapsed()
{
        std::chrono::time_point<std::chrono::system_clock> end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> duration = end - begin;
        return duration.count();
}
