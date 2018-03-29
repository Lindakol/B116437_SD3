#include "model.hpp"


Model::Model(std::string user, std::string pas, std::string e) 
	: game_status("main_menu"){

		player_ptr = std::make_shared<Player>(user, pas, e);
}

std::shared_ptr<Player> Model::get_player(){
	return player_ptr;
}

void Model::set_game_status(std::string selection){
	game_status = selection;
}

const std::string Model::get_game_status(){
	return game_status;
}


