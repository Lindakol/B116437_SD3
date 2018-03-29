/*
 *  Play game screen 
 *
 *  Play game screen represents the battleground screen, where 
 *  where the action game takes place. This screen is not yet 
 *  implemented. 
 *  
 * ----------------------------------------------------------------------------------
 */


#ifndef PLAY_GAME_SCREEN_HPP
#define PLAY_GAME_SCREEN_HPP

#include <iostream>
#include <memory>
#include "model.hpp"
#include "screen.hpp"
#include "controller.hpp"

class Play_game_screen : public Screen{
	public:
		// Create a battleground screen
		Play_game_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> pg_c_ptr);

		// Battleground edition of display
		void display();
};

#endif // PLAY_GAME_SCREEN_HPP
