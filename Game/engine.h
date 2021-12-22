//
//  engine.h
//  snake
//
//  Created by Danil Myskov on 30.11.2021.
//  Copyright © 2021 Danil Myskov. All rights reserved.
//

#ifndef engine_h
#define engine_h

#include <SFML/Graphics.hpp>

namespace game {

bool checkCollision(const sf::RectangleShape& , const sf::RectangleShape& );

    sf::RectangleShape getRectangleAt (sf::Vector2f location, sf::Color);
}
#endif /* engine_h */
