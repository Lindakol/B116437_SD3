/*
 * Users
 * 
 * Player class implements the basic user of the game (player).
 * Administrator class is expected to inherit this class, since the 
 * administrator was declared to be an augmented player, thus has all 
 * the functionalities of them.
 *  
 * ----------------------------------------------------------------------------------
 */


#ifndef USERS_HPP
#define USERS_HPP

#include <string>
#include "squad.hpp"

class Player {
    private:
	    // The username, password and email are 
	    // for now rules free, meaning that 
	    // no restrictions are applied and no checks 
	    // are being made. This is expected to change 
	    // in the release version of the game
	    // Username 
	    std::string username;
	    // Password 
	    std::string password;
	    // Email
	    std::string email;
	    std::vector<Squad> squad_vector;
    public:
	    // Create new user
	    Player(std::string username, std::string password, std::string email);
	
	    // Profile
	    const std::string get_password();
	    const std::string get_username();
	    const std::string get_email();
	    void set_username(std::string u);
	    void set_password(std::string pas);
	    void set_email(std::string e);
	    
	    // Squad
	    const std::vector<Squad> get_squad_vector();
	    void delete_squad(int sq_pos);
	    void add_squad(Squad sq);
		
	    // Squad members
	    void add_squad_member(std::string mem_name, int sq_pos);
	    void delete_squad_member(int sq_pos, int mem_pos);
};


#endif	// USERS_HPP

