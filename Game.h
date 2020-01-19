//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_GAME_H
#define SPACE_INVADERS_GAME_H
#include "MVCAbstract/ControllerAbstract.h"
#include "Utils/Object.h"
#include "json-develop/single_include/nlohmann/json.hpp"
#include <fstream>
#include <memory>
#include <stdlib.h>
#include <time.h>
#include <vector>
/**
 * \brief this class had everything needed to play spaceInvaders
 */
class Game
{
public:
        /**
         * \brief contructs the Game class with calling setupgame(std::string file,int x,int y)
         * @param file The game file(had all the levels in it) for this game
         * @param x The width in pixels of the game window
         * @param y the height in pixels of the game window
         */
        Game(std::string file, int x, int y);
        /**
         * \brief draws all views on the window
         */
        void drawGame();
        /**
         * \brief Starts the gameloop of the game, this function starts the game
         */
        void runGame();
        /**
         * \brief loads the next level of the game. if there is no next level
         */
        void nextlevel();
        /**
         *\brief loads the level in with the jsonfile file creates the objects mentionned in the jsonfile
         * @param file a json file that has all the objects in it
         */
        void loadLevel(std::string file);
        /**
         * \brief reads in the first level and creates the playership and shields and creates the
         * window the game will be drawn on
         * @param file The game file(had all the levels in it) for this game
         * @param x The width in pixels of the game window
         * @param y the height in pixels of the game window
         */
        void setupgame(std::string file, int x, int y);
        /**
         * \brief generates the game over sprite for when the game is finished
         * @return ths game over sprite
         */
        sf::Sprite generateOver();
        /**
         * \brief setter for end
         * @param end  the game end will be set to this
         */
        void setEnd(bool end);
        /**
         * \brief getter for the window w
         * @return the Game::w variable
         */
        const std::shared_ptr<sf::RenderWindow>& getW() const;

private:
        /**
         * \brief currentlevel state from the game
         */
        int currentlevel;
        /**
         * \brief all the locations of the levels in the game
         */
        std::vector<std::string> levels;
        /**
         * \briefis true when the game has ended
         */
        bool end;
        /**
         * \brief the texture of the gameover file
         */
        sf::Texture texture;
        /**
         * \brief the window the game will be drawn on
         */
        std::shared_ptr<sf::RenderWindow> w;
};

#endif // SPACE_INVADERS_GAME_H
