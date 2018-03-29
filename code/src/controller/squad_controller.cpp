#include "squad_controller.hpp"

Squad_controller::Squad_controller(std::shared_ptr<Model> mptr) 
	: Controller(mptr){}

const std::string Squad_controller::get_owner(){
	return get_model_ptr()->get_player()->get_username();
}

void Squad_controller::create_new_squad(Squad sq){
	get_model_ptr()->get_player()->add_squad(sq);
}

void Squad_controller::delete_squad(int sq_pos){
	get_model_ptr()->get_player()->delete_squad(sq_pos);
}

void Squad_controller::add_squad_member(std::string mem_name, int sq_pos){
	get_model_ptr()->get_player()->add_squad_member(mem_name, sq_pos);
}

void Squad_controller::delete_squad_member(int sq_pos, int mem_pos){
	get_model_ptr()->get_player()->delete_squad_member(sq_pos, mem_pos);
}
