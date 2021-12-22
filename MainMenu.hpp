#ifndef SS_UI_MAIN_MENU_H_
#define SS_UI_MAIN_MENU_H_

#include "GameMenu.h"
#include <SFML/Graphics.hpp>

namespace game {

    class MainMenu {
    public:


        void start(sf::RenderWindow *w);
    private:
        
        gmenu::MenuItem menuItems[2];
        gmenu::Action *action[2];

        char MenuText[2][6] = {
            "Start",
            "Exit"
        };
    };

    
    class StartGameAction : public gmenu::Action {
    public:
        StartGameAction( sf::RenderWindow * );
        bool start();
    private:
        sf::RenderWindow *window;
    };
    
    
    class ExitAction : public gmenu::Action {
    public:
        ExitAction( sf::RenderWindow * );
        bool start();
    private:
        bool getConfirmation();

        sf::RenderWindow *window;

        class ConfirmationMenuAction : public gmenu::Action {
            bool *confirm;
        public:
            ConfirmationMenuAction( bool *val ) {
                confirm = val;
            }
            bool start() {
                *confirm = true;
                return false;
            }
        };
        /* bool start() returns false in both case so that the dialog
        will be closed after the action is selected */
        class DeclineMenuAction : public gmenu::Action {
            bool *confirm;
        public:
            DeclineMenuAction( bool *val ) {
                confirm = val;
            }
            bool start() {
                *confirm = false;
                return false;
            }
        };
    };
    
}

#endif
