/*
 *  Main menu screen inherits Screen
 *
 *  The screen that implements the main menu screen.
 *
 * ----------------------------------------------------------------------------------
 */ 


#ifndef MAIN_MENU_SCREEN_HPP
#define MAIN_MENU_SCREEN_HPP

#include <iostream>
#include <memory>

#include "model.hpp"
#include "screen.hpp"
#include "main_menu_controller.hpp"

class Main_menu_screen : public Screen{
	private:
		// The controller associated with the screen
		std::shared_ptr<Main_menu_controller> main_menu_controller_ptr;

	public:
		// Create the main menu screen 
		Main_menu_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Main_menu_controller> mm_c_ptr);

		// Main menu edition of display
		void display();
};

#endif // MAIN_MENU_SCREEN_HPP
