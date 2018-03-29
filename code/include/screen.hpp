/*
 * Screen (abstract superclass)
 * 
 * Screen implements the basic elements and functionalities needed
 * by every screen.
 *
 * ----------------------------------------------------------------------------------
 */



#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <memory>
#include "controller.hpp"
#include "model.hpp"

class Screen{
	private:
		// Pointer to the Model
		std::shared_ptr<Model> model_ptr;
		// Pointer to the associated controller of the screen
		std::shared_ptr<Controller> controller_ptr;

	public:
		// Create a screen
		Screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> c_ptr);

		//Controller and Model are private members of the class
		std::shared_ptr<Controller> get_controller_ptr();
		std::shared_ptr<Model> get_model_ptr();
		// display function. It is expected to be implemented
		// differently by every screen
		virtual void display() = 0;
};

#endif // SCREEN_HPP
