/* ----------------------------------------------------------------------------------
* 
*  Squad
*  
*  The class Squad represents the squads of the game. Every squad 
*  has a name, an owner (the user that created it) and a list of Members.
*  Every Squad in its creation has a Captain, a Hierophant and 500 credits.
*
* ----------------------------------------------------------------------------------
*/


#ifndef SQUAD_HPP
#define SQUAD_HPP

#include<iostream>
#include<string>
#include<vector>
#include "members.hpp"

class Squad{
	private:
		// Name of the squad
		std::string name;
		// The username of the user that created it
		std::string owner;
		// Status of the squad (private or public)
		std::string status; 	
		// Vector containing all the members of the squad
		std::vector<Squad_member> members; 
		// Credits of the squad
		float credits;
	public:
		// Create a squad
		Squad(std::string owner);

		// Name, owner,status and credits are private members 
		// of the class
		const std::string get_squad_name();
		const std::string get_owner();
		const float get_credits();
		const std::string get_status();

		// Get the list of the members
		std::vector<Squad_member> get_squad_members();

		// add a member to the squad
		void add_squad_members(Squad_member sq_mem);
		// remove a member from the squad
		void delete_squad_member(int mem_pos);
};	


#endif //SQUAD_HPP
