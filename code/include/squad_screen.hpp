/*
 * The classes that implement the different screens needed 
 * for the squad menu. 
 *
 * ----------------------------------------------------------------------------------
 */



#ifndef SQUAD_SCREEN_HPP
#define SQUAD_SCREEN_HPP

#include <iostream>
#include <memory>

#include "screen.hpp"
#include "model.hpp"
#include "squad_controller.hpp"

class Main_squad_screen : public Screen{
	private:
		// Create a squad controller
		std::shared_ptr<Squad_controller> squad_controller_ptr;	
	public:
		// Create a Main squad menu screen
		Main_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller> s_c_ptr);

		// Main squad menu edition of display
		void display();
};


class Create_squad_screen : public Screen{
	private:
		// Create a squad controller
		std::shared_ptr<Squad_controller> squad_controller_ptr;	

	public:
		// Create a screen to create a squad
		Create_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller>);

		// Create a squad edition of display
		void display();
};


class Edit_squad_screen : public Screen{
	private:
		// Create a squad controller
		std::shared_ptr<Squad_controller> squad_controller_ptr;	

	public:
		// Create a screen to edit an existing squad
		Edit_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller>);
		// Edit a squad edition of display
		void display();

		// Function that implement the core functionality of deletion
		void delete_squad(int sq_pos);
		// Function that implements the core functionality of editing
		void edit_squad(int sq_pos);
		// Function that implements the core functionality of adding a member to a squad
		void add_squad_member(int sq_pos);
		// Function that implements the core functionality of deleting a member from a squad
		void delete_squad_member(int sq_pos);

};

#endif //SQUAD_SCREEN_HPP


