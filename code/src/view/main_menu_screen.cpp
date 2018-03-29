#include "main_menu_screen.hpp"


Main_menu_screen::Main_menu_screen(std::shared_ptr<Model> mptr, std::shared_ptr<Main_menu_controller> mm_c_ptr) 
	: Screen(mptr, mm_c_ptr),
          main_menu_controller_ptr(mm_c_ptr){}

void Main_menu_screen::display(){
    int response;
    std::string selection;

    std::cout << "======================================================= " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "		   Main menu                               " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "======================================================= " << std::endl;
    std::cout << "How do you want to proceed?" << std::endl;
    std::cout << "1. New game " << std::endl;
    std::cout << "2. Profile " << std::endl;
    std::cout << "3. Squads " << std::endl;
    std::cout << "4. Help " << std::endl;
    std::cout << "5. Credits " << std::endl;
    std::cout << "6. Exit " << std::endl;
    std::cout << "Please type the number of your selection: " << std::endl;
    std::cin >> response;

    while (response != 1 && response != 2 && response != 3 && response != 4 && response != 5 && response != 6){ 
    	std::cout << "Invalid option." << std::endl;
	std::cin >> response;
    }


    if (response == 1) 
	selection = "battleground";
    else if (response == 2)
	 selection = "profile";
    else if (response == 3)
	    selection = "squad_main_menu";
    else if (response == 4)
	    selection = "help";
    else if (response == 5)
	    selection = "credits";
    else if (response == 6)
	    selection = "exit";
    else 
	    selection = "main_menu";

    main_menu_controller_ptr->set_game_status(selection);
        
}
