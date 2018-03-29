#include "view.hpp"


View::View(std::shared_ptr<Model> mptr, std::shared_ptr<Main_menu_controller> mm_c_ptr) 
	: model_ptr(mptr), 
	  main_menu_controller_ptr(mm_c_ptr){

		current_screen_ptr = std::make_shared<Main_menu_screen>(mptr, mm_c_ptr);
}

void View::render(){
	
	// Display the main menu
	current_screen_ptr->display();
	// What did the user choose to do
	std::string selection = model_ptr->get_game_status();


	// Exit in the main menu
	while (selection != "exit"){

		// Main menu
		if (selection == "main_menu")
			 current_screen_ptr = std::make_shared<Main_menu_screen>(model_ptr, main_menu_controller_ptr);
		// Battleground
		else if (selection == "battleground") 
			current_screen_ptr = std::make_shared<Play_game_screen>(model_ptr, main_menu_controller_ptr->get_play_game_controller_ptr());
		// Squad main menu
		else if (selection == "squad_main_menu")
			current_screen_ptr = std::make_shared<Main_squad_screen>(model_ptr, main_menu_controller_ptr->get_squad_controller_ptr());
		// Help
		else if (selection == "help")
			current_screen_ptr = std::make_shared<Help_screen>(model_ptr, main_menu_controller_ptr->get_help_controller_ptr());
		// Profile
		else if (selection == "profile")
			current_screen_ptr = std::make_shared<Profile_screen>(model_ptr, main_menu_controller_ptr->get_profile_controller_ptr());
		// Credits
		else if (selection == "credits")
			current_screen_ptr = std::make_shared<Credits_screen>(model_ptr, main_menu_controller_ptr->get_credits_controller_ptr());
		else
			current_screen_ptr = std::make_shared<Main_menu_screen>(model_ptr, main_menu_controller_ptr);

		current_screen_ptr->display();
		selection = model_ptr->get_game_status();
	}

	std::cout << "======================================================= " << std::endl;
        std::cout << "                 GOODBYE                                " << std::endl;  
        std::cout << "======================================================= " << std::endl;

}	
