#include "members.hpp"

//% ======================================= //
//% 	Squad member (soldiers)		    //
//% ======================================= //

Squad_member::Squad_member(std::string n) 
	: name(n), 
	  health_level(100){}

const std::string Squad_member::get_name(){
	return name;
}

const int Squad_member::get_health_level(){
	return health_level;
}


//% ======================================= //
//% 	   	 Captain		    //
//% ======================================= //

Captain::Captain(std::string n, std::string sk) 
	: Squad_member(n), 
	  skill(sk), 
	  skill_level(0){}

void Captain::increase_skill_level(){
	skill_level++;
}

const int Captain::get_skill_level(){
	return skill_level;
}

const std::string Captain::get_skill(){
	return skill;
}


// ======================================= //
// 	   	 Hierophant		   //
// ======================================= //

Hierophant::Hierophant(std::string n, std::string sk) 
	: Squad_member(n), 
	  skill(sk), 
	  skill_level(0){}

void Hierophant::increase_skill_level(){
	skill_level++;
}

const int Hierophant::get_skill_level(){
	return skill_level;
}

const std::string Hierophant::get_skill(){
	return skill;
}
