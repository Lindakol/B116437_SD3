#include <iostream>
#include "play_game_screen.hpp"

Screen::Screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> c_ptr)
	: model_ptr(mptr), 
	  controller_ptr(c_ptr){}

std::shared_ptr<Controller> Screen::get_controller_ptr(){
	return controller_ptr;
}

std::shared_ptr<Model> Screen::get_model_ptr(){
	return model_ptr;
}

