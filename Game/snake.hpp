//
//  snake.hpp
//  snake
//
//  Created by Danil Myskov on 30.11.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#ifndef snake_hpp
#define snake_hpp

#include <SFML/Graphics.hpp>
#include <list>
#include <random>

#include "food.hpp"

#define SNAKE_MAX_LENGTH 2000

namespace game {

        class Random {
            std::random_device rd;
            std::mt19937 gen;
        public:
            Random() {
                gen.seed(rd());
            }
            
            int getRandomInt (int l, int u) {
                std::uniform_int_distribution<int> dist(l, u);
                return dist(gen);
            }
        };

        class Snake {
        public:
            Snake(sf::RenderWindow *);
            void drawSnake();
            bool died();
            bool ateFood(Food *fd);
            void moveSnake(sf::Vector2<int> direction);
            
            sf::Vector2f getNextFoodLocation();
            
        private:
            sf::RenderWindow *screen;
            Random rand;
            
            bool updateLength;
            float movementScale;
            int snake_length;
            std::list<sf::Vector2<int> > snake_direction_list;
            sf::Vector2<int> lastDirection;
            std::vector<sf::RectangleShape> body;
            
            sf::Color colorBody;
            sf::Color colorHead;
        };

}
#endif /* snake_hpp */
