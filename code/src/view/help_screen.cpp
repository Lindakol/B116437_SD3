#include "help_screen.hpp"

Help_screen::Help_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> h_c_ptr) 
	: Screen(mptr, h_c_ptr){}

void Help_screen::display(){

	int selection;

	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "		           HELP                               " << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;	
	std::cout << " " << std::endl;
	std::cout << "Welcome to the War Game. " << std::endl;
	std::cout << "This is a turn based simulator for a tabletop miniature " << std::endl;
	std::cout << "skirmish game. Every player has a number of squads, that" << std::endl;
	std::cout << "consist of a number of members. Every squad has at least" << std::endl;
	std::cout << "one Captain and one Hierophant. The Captain leads the   " << std::endl;
	std::cout << "the team, while the Hierophant supports the squad,      " << std::endl;
	std::cout << "extolling the litany of their cause and nation. Each    " << std::endl;
    	std::cout << "player starts with a squad with a Captain and a Hierophant" << std::endl;
	std::cout << " " << std::endl;


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
		
	
