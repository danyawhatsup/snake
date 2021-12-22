//
//  main.cpp
//  snake_flex
//
//  Created by Danil Myskov on 22.12.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#include "MainMenu.hpp"
 
int main() {
    sf::RenderWindow window( sf::VideoMode( 800, 800 ), "Snake", sf::Style::Close );
    game::MainMenu menu;
    menu.start(&window);
    return 0;
}
