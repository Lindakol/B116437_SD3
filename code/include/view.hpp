/*
 * View is implementing the basic View class of the game.
 * It include the loop of the game and depending on the 
 * status of the Model renders the right screen
 *
 * ----------------------------------------------------------------------------------
 */


#ifndef VIEW_HPP
#define VIEW_HPP

#include <iostream>
#include <memory>
#include "model.hpp"
#include "play_game_screen.hpp"
#include "main_menu_controller.hpp"
#include "screen.hpp"
#include "main_menu_screen.hpp"
#include "squad_controller.hpp"
#include "squad_screen.hpp"
#include "help_screen.hpp"
#include "profile_screen.hpp"
#include "credits_screen.hpp"

class View{
	private:
		// Model
		std::shared_ptr<Model> model_ptr;
		// Main menu controller
		std::shared_ptr<Main_menu_controller> main_menu_controller_ptr;
		// Pointer to the current screen
		std::shared_ptr<Screen> current_screen_ptr;

	public:
		// Create the View
		View(std::shared_ptr<Model> mptr, std::shared_ptr<Main_menu_controller> mm_c_ptr);

		// Render the right screen
		void render();
};

#endif //VIEW_HPP
