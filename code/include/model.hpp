/* ----------------------------------------------------------------------------------
 * 
 *  It represents the Model of the Game.
 *
 * ----------------------------------------------------------------------------------
 */


#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "users.hpp"

class Model{
	private:
		// Status of the game (in which screen we are)
		std::string game_status; 
		// The user account that plays the game	
		std::shared_ptr<Player> player_ptr;
	public:
		// create the model
		Model(std::string username, std::string password, std::string email);

		// Player and game status are private members of the class
		std::shared_ptr<Player> get_player();
		const std::string get_game_status();
		
		// Set the status of the game
		void set_game_status(std::string game_status);
	
};



#endif //MODEL_HPP
