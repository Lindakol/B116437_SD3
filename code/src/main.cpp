/*
*  Prototype for the War Game
*
*  This prototype was created to verify the practical feasibility of the MVC pattern 
*  in the war game.
*  The code is not intended to be a first version of the game but rather a basis 
*  for further development.  
*
*  To compile the code the Makefile provided should be used
*  To run the program, after compiling (make) you should run the command make run
*  
* ----------------------------------------------------------------------------------
* 
*  Project : 	Prototype for the War Game
*                        
*  Programming Language : C++
*
*  Game design: Model View Controller (MVC)
*                           
*  Date : 30.03.2018
*
*  Author: B116437
*
* ----------------------------------------------------------------------------------
*/

#include <memory>
#include <iostream>

#include "model.hpp"
#include "main_menu_controller.hpp"
#include "view.hpp"

int main(int argc, char **argv)
{

	std::string username, password, email;
	
	std::cout << "======================================================= " << std::endl;
        std::cout << " 		                                               " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << "                  WELCOME TO WAR GAME                   " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << " 		                                               " << std::endl;
        std::cout << "======================================================= " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << " " << std::endl;
	
	std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        std::cout << "                      REGISTER                          " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "======================================================= " << std::endl;
        
	
	std::cout << "Please give a username" << std::endl;
	std::cin >> username;
	std::cout << "Please give a password" << std::endl;
	std::cin >> password;
	std::cout << "Please give an email" << std::endl;
	std::cin >> email;

	// Create the Model
	std::shared_ptr<Model> model_ptr = std::make_shared<Model>(username, password, email);		

	// Create the Controller -- Main menu is the basic page, thus, the controller is the basic one
	// Initialise also the rest of the controllers
	std::shared_ptr<Main_menu_controller> main_menu_controller_ptr = std::make_shared<Main_menu_controller>(model_ptr);	
	
	// Create the View
	std::shared_ptr<View> view_ptr = std::make_shared<View>(model_ptr, main_menu_controller_ptr);
	
	// Run the Game
	view_ptr->render();

	return 0;

}
