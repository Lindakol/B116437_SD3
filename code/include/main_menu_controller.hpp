/*
 *  Main menu controller inherits Controller
 *
 *  Main menu controller implements the controller that is 
 *  associated with the Main menu screen.
 *
 * ----------------------------------------------------------------------------------
 */

#ifndef MAIN_MENU_CONTROLLER_HPP
#define MAIN_MENU_CONTROLLER_HPP

#include <iostream>
#include <memory>

#include "model.hpp"
#include "controller.hpp"
#include "squad_controller.hpp"

class Main_menu_controller : public Controller{
	private:
		// The Main_menu_controller should be able to invoke 
		// the right controller depending on what the user wants 
		// to do. For the purposes of the prototype it would 
		// be enough to only have two pointers; one of type Controller
		// and one of type Squad_Controller. However, in general if every 
		// screen has its one type of Controller, all different types 
		// should be included.
		std::shared_ptr<Controller> help_controller_ptr;
		std::shared_ptr<Controller> play_game_controller_ptr;
		std::shared_ptr<Squad_controller> squad_controller_ptr;
		std::shared_ptr<Controller> profile_controller_ptr;
		std::shared_ptr<Controller> credits_controller_ptr;

	public:
		// Create the main menu controller and connect it with the user and the squad
		// Initialise also the controllers
		Main_menu_controller(std::shared_ptr<Model> model_ptr);

		// invoke the play game controller
		const std::shared_ptr<Controller> get_play_game_controller_ptr();

		// invoke the squad controller
		const std::shared_ptr<Squad_controller> get_squad_controller_ptr();
		
		//invoke the help controller
		const std::shared_ptr<Controller> get_help_controller_ptr();

		//invoke profile  controller
		const std::shared_ptr<Controller> get_profile_controller_ptr();

		//invoke credits controller
		const std::shared_ptr<Controller> get_credits_controller_ptr();
};


#endif // MAIN_MENU_CONTROLLER_HPP
