//
// Created by student on 11.12.19.
//

#include "Game.h"
int main(int argc, char* argv[])
{
        Game g;
        g.loadLevel("../level.json");
        g.runGame();
        return 0;
}