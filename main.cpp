//
// Created by student on 11.12.19.
//

#include "Game.h"
int main(int argc, char* argv[])
{
        Game g(argv[1],atoi(argv[2]),atoi(argv[3]));
        g.runGame();
        return 0;
}