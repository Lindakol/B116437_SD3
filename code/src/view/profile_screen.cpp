#include "profile_screen.hpp"

Profile_screen::Profile_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> p_c_ptr)
	: Screen(mptr, p_c_ptr){}

void Profile_screen::display(){

	int selection;

	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "		WELCOME   "  << get_model_ptr()->get_player()->get_username() << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;	
	std::cout << " " << std::endl;

	std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "DETAILS:						       " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Username: " << get_model_ptr()->get_player()->get_username() << std::endl;
	std::cout << "Email: "  << get_model_ptr()->get_player()->get_email() << std::endl;
        std::cout << "======================================================= " << std::endl; 
	std::cout << "======================================================= " << std::endl;
	std::cout << "Your squads: " << std::endl;

	std::vector<Squad> sq_vec = get_model_ptr()->get_player()->get_squad_vector();
	
	
	for (auto i = sq_vec.begin(); i != sq_vec.end(); ++i){
		std::cout << i->get_squad_name() << std::endl;
	}
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cout << "To return to Main Menu please press 0 (zero)" << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cin >> selection;	

	while (selection != 0){ 
		std::cout << "Invalid option." << std::endl;
		std::cin >> selection;
	}
	
	get_controller_ptr()->set_game_status("main_menu"); 
}


