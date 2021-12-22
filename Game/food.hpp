//
//  food.hpp
//  snake
//
//  Created by Danil Myskov on 30.11.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#ifndef food_hpp
#define food_hpp

#include "engine.h"

#include <SFML/Graphics.hpp>
#include <random>
#include <iostream>

namespace game {
    class Food {
    public:
        Food(sf::RenderWindow *, sf::Vector2f loc);
        sf::RectangleShape getfood();
        void drawFood();
        ~Food() {
            std::cout << "Food\n";
        }
    private:
        sf::Color color;
        sf::Vector2f location;
        sf::RectangleShape food;
        sf::RenderWindow *screen;
    };

}

#endif /* food_hpp */
