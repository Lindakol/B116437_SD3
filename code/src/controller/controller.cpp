#include "controller.hpp"

Controller::Controller(std::shared_ptr<Model> mptr)
	: model_ptr(mptr){}

void Controller::set_game_status(std::string selection){
	model_ptr->set_game_status(selection);
}

std::shared_ptr<Model> Controller::get_model_ptr(){
	return model_ptr;
}

