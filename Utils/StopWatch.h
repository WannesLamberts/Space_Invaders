//
// Created by student on 16.12.19.
//

#ifndef SPACE_INVADERS_STOPWATCH_H
#define SPACE_INVADERS_STOPWATCH_H


class StopWatch {
public:
    static StopWatch& getInstance(){
        static StopWatch    instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    StopWatch(){};
    StopWatch(StopWatch const&);
    StopWatch& operator=(StopWatch const&);
};


#endif //SPACE_INVADERS_STOPWATCH_H
