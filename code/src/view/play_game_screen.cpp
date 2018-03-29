#include "play_game_screen.hpp"

Play_game_screen::Play_game_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Controller> pg_c_ptr) 
	: Screen(mptr, pg_c_ptr) {}

void Play_game_screen::display(){
    
    int selection;

    std::cout << "======================================================= " << std::endl;
    std::cout << "             WELCOME TO THE BATTLEGROUND                " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "		   LET'S PLAY THAT GAME                    " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "                                                        " << std::endl;               
    std::cout << "======================================================= " << std::endl;

    std::cout << "To return to Main Menu please press 0 (zero)" << std::endl;
    std::cin >> selection;

    while (selection != 0){ 
	    std::cout << "Invalid option." << std::endl;
	    std::cin >> selection;
    }

    get_controller_ptr()->set_game_status("main_menu"); 
}
