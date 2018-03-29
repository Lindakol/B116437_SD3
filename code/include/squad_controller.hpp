/*
 * Squad controller inherits Controller
 *
 * The controller that is associated with the 
 * squad screen 
 *
 * ----------------------------------------------------------------------------------
 */  



#ifndef SQUAD_CONTROLLER_HPP
#define SQUAD_CONTROLLER_HPP

#include <memory>
#include <string>
#include "model.hpp"
#include "squad.hpp"
#include "controller.hpp"

class Squad_controller : public Controller{
	public:
		// Create the squad controller
		Squad_controller(std::shared_ptr<Model> model_ptr);
		
		// Function needed to get the username of the user 
		// currently playing
		const std::string get_owner();
		
		// Create a new squad for the user's account
		void create_new_squad(Squad sq);
		// Delete a squad from the user's account
		void delete_squad(int sq_pos);

		// Add a new member to an existing squad
		void add_squad_member(std::string mem_name, int sq_pos);
		// Remove a member from an existing squad
		void delete_squad_member(int sq_pos, int mem_pos);
	
};

#endif // SQUAD_CONTROLLER_HPP
