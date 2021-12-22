//
//  food.cpp
//  snake
//
//  Created by Danil Myskov on 30.11.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#include <SFML/Graphics.hpp>
#include "food.hpp"

game::Food::Food(sf::RenderWindow *w, sf::Vector2f loc)
{
    location = loc;
    screen = w;
    color = sf::Color::Red;
    food = getRectangleAt(location, color);
    
}

sf::RectangleShape game::Food::getfood()
{
    return food;
}

void game::Food::drawFood()
{
    screen->draw ( food );
}
