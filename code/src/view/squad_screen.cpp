#include "squad_screen.hpp"

Main_squad_screen::Main_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller> s_c_ptr)
	: Screen(mptr, s_c_ptr),
	  squad_controller_ptr(s_c_ptr){}

void Main_squad_screen::display(){
	
	int selection;
	std::cout << "======================================================= " << std::endl;
        std::cout << " 		                                               " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << "                  SQUAD SCREEN                          " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << " 		                                               " << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "MENU:						       " << std::endl;
	std::cout << "1. Create new squad				       " << std::endl;
	std::cout << "2. Edit a squad                                         " << std::endl;
	std::cout << "3. Help						       " << std::endl;
	std::cout << "4. Main menu					       " << std::endl;
        std::cout << "======================================================= " << std::endl;
    	std::cout << "Please type the number of your selection: " << std::endl;
	std::cin >> selection;

    	while (selection != 1 && selection != 2 && selection != 3 && selection != 4){ 
		std::cout << "Invalid option." << std::endl;
	    	std::cin >> selection;
    	}

	if (selection == 1){
		Create_squad_screen c_sq_screen(get_model_ptr(), squad_controller_ptr);
		c_sq_screen.display();		
	}
	else if (selection == 2){
		Edit_squad_screen e_sq_screen(get_model_ptr(), squad_controller_ptr);
		e_sq_screen.display();
	}	
	else if (selection == 3)
		squad_controller_ptr->set_game_status("help");
        else
		squad_controller_ptr->set_game_status("main_menu"); 

}

// =============================================================//
//  CREATE SQUAD SCREEN					       //
// ========================================================== //

Create_squad_screen::Create_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller> s_c_ptr) 
	: Screen(mptr, s_c_ptr),
	  squad_controller_ptr(s_c_ptr){}


void Create_squad_screen::display(){

	int selection;

	std::cout << "======================================================= " << std::endl;
        std::cout << "                  CREATE SQUAD                          " << std::endl;
        std::cout << "======================================================= " << std::endl;
	
	Squad sq(squad_controller_ptr->get_owner());

	squad_controller_ptr->create_new_squad(sq);
	
	std::cout << "======================================================= " << std::endl;
	std::cout << "The new squad has been created" << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cout << "To return to Squad Menu please press 1" << std::endl;
	std::cout << "To return too Main Menu please press 0 (zero)" << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cin >> selection;	

	while (selection != 1 && selection != 0){ 
		std::cout << "Invalid option." << std::endl;
		std::cin >> selection;
	}
	if (selection == 0)
 		squad_controller_ptr->set_game_status("main_menu"); 
	else
		squad_controller_ptr->set_game_status("squad_main_menu"); 
}


// =============================================================//
//  EDIT SQUAD SCREEN					       //
// ========================================================== //

Edit_squad_screen::Edit_squad_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Squad_controller> s_c_ptr)
	: Screen(mptr, s_c_ptr),
	  squad_controller_ptr(s_c_ptr){}

void Edit_squad_screen::display(){

	std::string response;
        int selection; 
	
	std::cout << "======================================================= " << std::endl;
        std::cout << "                    YOUR SQUADS                         " << std::endl;
        std::cout << "======================================================= " << std::endl;
	
	std::vector<Squad> sq_vec = get_model_ptr()->get_player()->get_squad_vector();
	
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	
	for (auto i = sq_vec.begin(); i != sq_vec.end(); ++i){
		std::cout << i->get_squad_name() << std::endl;
	}
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cout << "Please type the name of the squad you want to edit: " << std::endl;
	std::cin >> response;
	
	int sq_pos = 0; 	// Returns the position of the squad in the vector
	bool flag = false; // flag to check that the name the user typed exists
	for (auto i = sq_vec.begin(); i != sq_vec.end(); ++i){
		if (response == i->get_squad_name()){
			flag = true;
			break;
		}
		sq_pos++;
	}
	
	while (flag == false){
		std::cout << "======================================================= " << std::endl;
		std::cout << "ERROR: Unknown squad. Please try again" << std::endl;
		std::cout << "======================================================= " << std::endl;
		std::cin >> response;
		sq_pos = 0;
		for (auto i = sq_vec.begin(); i != sq_vec.end(); ++i){
			if (response == i->get_squad_name()){
				flag = true;
				break;
			}
			sq_pos++;
		}
	}
	

	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << sq_vec[sq_pos].get_squad_name() << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "1. Edit roster		 			       " << std::endl;
	std::cout << "2. Delete squad                                         " << std::endl;
	std::cout << "3. Return to Squad Menu				      " << std::endl;
	std::cout << "======================================================= " << std::endl;
    	std::cout << "Please type the number of your selection: " << std::endl;
	std::cin >> selection;

	while (selection != 1 && selection != 2 && selection != 3){ 
		std::cout << "Invalid option." << std::endl;
		std::cin >> selection;
	}

	if (selection == 1)
		// Edit squad
		edit_squad(sq_pos);
	else if (selection == 2)
		// Delete squad
		delete_squad(sq_pos);
	else{
		// Return to Squad menu
		squad_controller_ptr->set_game_status("squad_main_menu"); 
		return;
	}

	
	std::cout << "======================================================= " << std::endl;
	std::cout << "To return to Squad Menu please press 1" << std::endl;
	std::cout << "To return to Main Menu please press 0 (zero)" << std::endl;		
	std::cin >> selection;	
	std::cout << "======================================================= " << std::endl;

	while (selection != 1 && selection != 0){ 
		std::cout << "Invalid option." << std::endl;
		std::cin >> selection;
	}

	if (selection == 0)
 		squad_controller_ptr->set_game_status("main_menu"); 
	else
		squad_controller_ptr->set_game_status("squad_main_menu"); 

}


void Edit_squad_screen::delete_squad(int sq_pos){

	std::string response;
	std::vector<Squad> sq_vec = get_model_ptr()->get_player()->get_squad_vector();

	std::cout << "Are you sure you want to delete the squad?" << std::endl;
	std::cout << "Please retype the name of the squad you want to delete" << std::endl;
	std::cin >> response;


	std::cout << "======================================================= " << std::endl;
	if (response == sq_vec[sq_pos].get_squad_name()){
		squad_controller_ptr->delete_squad(sq_pos);
		std::cout << "Squad has been deleted successfully" << std::endl;
	}
	else
		std::cout << "ERROR: Wrong squad name" << std::endl;

	std::cout << "======================================================= " << std::endl;

}



void Edit_squad_screen::edit_squad(int sq_pos){

	int selection;

	std::vector<Squad> sq_vec = get_model_ptr()->get_player()->get_squad_vector();

	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << sq_vec[sq_pos].get_squad_name() << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "STATUS: " <<   sq_vec[sq_pos].get_status() << "    CREDITS: " << sq_vec[sq_pos].get_credits() << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cout << "MEMBERS: " << std::endl;
	for (auto i = sq_vec[sq_pos].get_squad_members().begin(); i != sq_vec[sq_pos].get_squad_members().end(); ++i){
		std::cout << " " <<i->get_name() << std::endl;
	}
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "MENU " << std::endl;							
	std::cout << "1. Add squad member 	 			       " << std::endl;
	std::cout << "2. Delete squad member                                  " << std::endl;
        std::cout << "======================================================= " << std::endl;
    	std::cout << "Please type the number of your selection: " << std::endl;
	std::cin >> selection;

	while (selection != 1 && selection != 2){ 
		std::cout << "Invalid option." << std::endl;
		std::cin >> selection;
	}

	if (selection == 1)
		add_squad_member(sq_pos);
	else
		delete_squad_member(sq_pos);
	
	std::vector<Squad> sq_vec_new = get_model_ptr()->get_player()->get_squad_vector();
	std::cout << "The squad now has the following form" << std::endl;

	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << sq_vec_new[sq_pos].get_squad_name() << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "STATUS: " << sq_vec_new[sq_pos].get_status() << "     CREDITS: " << sq_vec_new[sq_pos].get_credits() << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cout << "MEMBERS: " << std::endl;
	for (auto i = sq_vec_new[sq_pos].get_squad_members().begin(); i != sq_vec_new[sq_pos].get_squad_members().end(); ++i){
		std::cout << " " << i->get_name() << std::endl;
	}
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;


}

void Edit_squad_screen::add_squad_member(int sq_pos){

	std::string response;

	std::cout << "Please give a name for the new member" << std::endl;
	std::cin >> response;

	std::cout << "======================================================= " << std::endl;
	std::cout << "Please wait.. " << std::endl;
	std::cout << "======================================================= " << std::endl;
	
	squad_controller_ptr->add_squad_member(response, sq_pos);

	std::cout << "New member has been added to the roster successfully" << std::endl;

}


void Edit_squad_screen::delete_squad_member(int sq_pos){

	std::string response;
	std::vector<Squad> sq_vec = get_model_ptr()->get_player()->get_squad_vector();

	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << sq_vec[sq_pos].get_squad_name() << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "MEMBERS:				CREDITS: " << sq_vec[sq_pos].get_credits() << std::endl;
	for (auto i = sq_vec[sq_pos].get_squad_members().begin(); i != sq_vec[sq_pos].get_squad_members().end(); ++i){
		std::cout << " " << i->get_name() << std::endl;
	}
	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "Which member would you like to remove? " << std::endl;
	std::cin >> response;

	int mem_pos = 0; // find the position of the member in the <Squad_member> vector of the squad
	bool flag = false; 	// flag to check if the member exists
	
	for (auto i = sq_vec[sq_pos].get_squad_members().begin(); i != sq_vec[sq_pos].get_squad_members().end(); ++i){
		if (response == i->get_name()){
			flag = true;
			break;	
		}
		mem_pos++;
	}	
	
	while (flag == false){
		std::cout << "======================================================= " << std::endl;
		std::cout << "Unknown squad member. Please try again." << std::endl;
		std::cout << "======================================================= " << std::endl;

		std::cin >> response;
		mem_pos = 0;
		for (auto i = sq_vec[sq_pos].get_squad_members().begin(); i != sq_vec[sq_pos].get_squad_members().end(); ++i){
			if (response == i->get_name()){
				flag = true;
				break;	
			}
			mem_pos++;
		}	
	}

	auto sq_members_vec = sq_vec[sq_pos].get_squad_members(); 
	std::cout << "======================================================= " << std::endl;
	std::cout << "Are you sure you want to remove " << sq_members_vec[mem_pos].get_name() << " from the squad?" << std::endl;
	std::cout << "Please retype the name of the member you want to delete from the squad" << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cin >> response;       	
	std::cout << "======================================================= " << std::endl;
	std::cout << "Please wait.. " << std::endl;
	std::cout << "======================================================= " << std::endl;
	
	if (response == sq_members_vec[mem_pos].get_name()){
		squad_controller_ptr->delete_squad_member(sq_pos, mem_pos);
		std::cout << "The member has been deleted from the squad successfully" << std::endl;
	}
	else
		std::cout << "ERROR : Wrong squad member name" << std::endl;
	 std::cout << "======================================================= " << std::endl;


}
