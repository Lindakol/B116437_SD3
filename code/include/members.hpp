/*
 * Members
 *
 * Squad members class represents the squad members. It is a superclass that 
 * includes the basic elements and behaviour that a member have.  
 * The Captain and the Hieorphant inherit the squad class. For now Captain and 
 * Hierophant seem identical classes, but they are expected to have different 
 * elements and functionalities on the game, thus, are implemented as separate 
 * functions.
 *
 * ----------------------------------------------------------------------------------
 */

#ifndef MEMBERS_HPP
#define MEMBERS_HPP

#include <iostream>
#include <string>


class Squad_member{
	private:
		// Name of the member
		std::string name;
		// The health level of the member
		int health_level;
	public:
		// Create a squad member
		Squad_member(std::string n);
		
		// Name and health are private members of the class
		const std::string get_name();
		const int get_health_level();
};	


class Captain : public Squad_member{
	private:
		// The skill chosen for the captain
		// For now its is just a string but 
		// it is expected to be a separate data 
		// structure or class
		std::string skill;	
		//The level of the skill
		int skill_level;
	public:
		// Create a captain
		Captain(std::string n, std::string skill);
		
		// This function is used to increase the level
		void increase_skill_level();

		// Skill and skill level are private members of the class 
		const int get_skill_level();
		const std::string get_skill();
};



class Hierophant : public Squad_member{
	private:
		// The skill chosen for the Hierophant
		// For now its is just a string but 
		// it is expected to be a separate data 
		// structure or class
		std::string skill;	
		// Skill level
		int skill_level;
	public:
		// Create a hierophant
		Hierophant(std::string n, std::string skill);

		// Increase the skill level
		void increase_skill_level();

		// Skill and skill level are private members of the function 
		const int get_skill_level();
		const std::string get_skill();
};


#endif //MEMBERS_HPP
