#include "credits_screen.hpp"

Credits_screen::Credits_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> c_c_ptr) 
	: Screen(mptr, c_c_ptr){}

void Credits_screen::display(){

	int selection;

	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "		           CREDITS                            " << std::endl;
    	std::cout << "======================================================= " << std::endl;
    	std::cout << "======================================================= " << std::endl;	
	std::cout << " " << std::endl;
	
	std::cout << "Writer and Director: " << std::endl;
	std::cout << "Assistant Director: " << std::endl;
	std::cout << "Art Director: " << std::endl;
	std::cout << "Character Design: " << std::endl;
	std::cout << "Mechanical Design: " << std::endl;
	std::cout << "Designers: " << std::endl;
	std::cout << "Musical Composer: " << std::endl;
	std::cout << "Sound Effects: " << std::endl;
	std::cout << "Assistant Programmer: " << std::endl;
	std::cout << "Software Programmer: " << std::endl;
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
		
	
