//
//  game.hpp
//  snake
//
//  Created by Danil Myskov on 30.11.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include "snake.hpp"
#include "food.hpp"

#include <SFML/Graphics.hpp>
#include <random>
#include <list>

#define BOX_SIZE 20

namespace game {
        
        class GameController {
        public:
            GameController(sf::RenderWindow *w);
            void start();
            //sf::Font* getFont(Fonts font);
            
        private:
            void gameLoop();
            void setup();
            void gameOver();
            void loadResources();
            Snake snake;
            sf::RenderWindow *screen;
            float scale;
            int score;
//            sf::Font fontList[3];
        };
}

#endif /* game_hpp */
