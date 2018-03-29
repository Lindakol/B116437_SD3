/*
 * Help screen inherits Screen  
 *
 * This class implements the help screen. 
 *
 * ----------------------------------------------------------------------------------
 */

#ifndef HELP_SCREEN_HPP
#define HELP_SCREEN_HPP

#include <iostream>
#include <memory>

#include "screen.hpp"
#include "model.hpp"
#include "controller.hpp"

class Help_screen : public Screen{
	public:
		// create a help screen
		Help_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> h_c_ptr);

		// Help screen edition of display
		void display();
};


#endif // HELP_SCREEN_HPP
