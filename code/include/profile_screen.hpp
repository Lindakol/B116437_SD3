/*
 *  Profile screen inherits Screen
 *
 *  Profile screen implements the profile screen of the user.
 *  It is not yet fully implemented. The user can only observe 
 *  their details, but not edit them
 *  
 * ----------------------------------------------------------------------------------
 */

#ifndef PROFILE_SCREEN_HPP
#define PROFILE_SCREEN_HPP


#include <iostream>

#include "screen.hpp"
#include "controller.hpp"

class Profile_screen : public Screen{
	public:
		// Create a profile screen
		Profile_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> p_c_ptr);

		// Profile's edition of display
		void display();
};

#endif // PROFILE_SCREEN_HPP
