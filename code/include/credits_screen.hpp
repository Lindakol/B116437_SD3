/*
 *  Credits screen inherits Screen
 *
 *  This class is used to implement the screen that
 *  presents the credits of the game. 
 *  
 * ----------------------------------------------------------------------------------
 */

#ifndef CREDITS_SCREEN_HPP
#define CREDITS_SCREEN_HPP

#include <iostream>
#include <memory>

#include "screen.hpp"
#include "model.hpp"
#include "controller.hpp"

class Credits_screen : public Screen{
	public:
		//Create a credit screen
		Credits_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> c_c_ptr);

		// Credits edition of display
		void display();
};


#endif // CREDITS_SCREEN_HPP
