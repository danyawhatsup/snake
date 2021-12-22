#include "MainMenu.hpp"

#include "game.hpp"



void game::MainMenu::start( sf::RenderWindow * w ) {
    gmenu::Menu menu( w );
    action[0] = new StartGameAction( w );
    action[1] = new ExitAction( w );
    gmenu::MenuItem items[4];
    for ( int i = 0; i < 4; ++i ) {
        items[i].title = MenuText[i];
        items[i].action = action[0];
    }
    items[1].action = action[1];
    menu.setMenuItems( items, 4 );
    menu.setTitle( "Snake" );
    menu.createMenu();
}


game::StartGameAction::StartGameAction( sf::RenderWindow *w ) {
    window = w;
}

bool game::StartGameAction::start() {
    game::GameController gameController( window );
    gameController.start();
    return true;
}



game::ExitAction::ExitAction( sf::RenderWindow *w ) {
    window = w;
}

bool game::ExitAction::start() {
    if ( getConfirmation() )
        return false; // means exit
    return true;
}

bool game::ExitAction::getConfirmation() {
    bool confirm = false;
    gmenu::MenuItem items[2]; //Creating a list of Menu Items for the Dialog
    items[0].title = "Yes";
    items[0].action = new ConfirmationMenuAction( &confirm );
    items[1].title = "No";
    items[1].action = new DeclineMenuAction( &confirm );
    gmenu::Menu dialog( window, "Are you sure?", items, 2 ); //Creating the confirmation dialog
    dialog.createMenu();
    return confirm;
}
