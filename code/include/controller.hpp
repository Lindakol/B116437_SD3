/*
 *  Controller
 *
 *  Controller  class is used as a superclass for the 
 *  controllers of the prototype. Every new controller created 
 *  should inherit this class. 
 *
 * ----------------------------------------------------------------------------------
 */


#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <memory>
#include <string>
#include "model.hpp"

class Controller{
	private:
		// Pointer to the Model
		std::shared_ptr<Model> model_ptr;
	public:
		// Create a controller
		Controller(std::shared_ptr<Model> mptr);
		
		// Set the status of the game. Where the user 
		// (which screen) the user is
		void set_game_status(std::string selection);

		// Needed since the Model pointer is private
		std::shared_ptr<Model> get_model_ptr();
};

#endif // CONTROLLER_HPP
