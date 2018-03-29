#include "main_menu_controller.hpp"

Main_menu_controller::Main_menu_controller(std::shared_ptr<Model> mptr) 
	: Controller(mptr){
	
	//Initialise Controllers
	play_game_controller_ptr = std::make_shared<Controller>(get_model_ptr());
	squad_controller_ptr = std::make_shared<Squad_controller>(get_model_ptr());
	help_controller_ptr = std::make_shared<Controller>(get_model_ptr());
	profile_controller_ptr = std::make_shared<Controller>(get_model_ptr());
	credits_controller_ptr = std::make_shared<Controller>(get_model_ptr());
}


const std::shared_ptr<Controller> Main_menu_controller::get_play_game_controller_ptr(){
	return play_game_controller_ptr;
}

const std::shared_ptr<Squad_controller> Main_menu_controller::get_squad_controller_ptr(){
	return squad_controller_ptr;
}

const std::shared_ptr<Controller> Main_menu_controller::get_help_controller_ptr(){
	return help_controller_ptr;
}

const std::shared_ptr<Controller> Main_menu_controller::get_profile_controller_ptr(){
	return profile_controller_ptr;
}

const std::shared_ptr<Controller> Main_menu_controller::get_credits_controller_ptr(){
	return credits_controller_ptr;
}
