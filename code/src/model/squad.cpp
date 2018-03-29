#include "squad.hpp"

Squad::Squad(std::string ow) 
	: owner(ow), 
	credits(500){

	std::string n, sk; // temporary variable to use for the captain + hierophants name+skill
 	
	std::cout << "======================================================= " << std::endl;
        std::cout << "           LET'S CREATE A SQUAD                         " << std::endl;
        std::cout << "======================================================= " << std::endl;
	std::cout << "Give a name to your squad" << std::endl;
	std::cin >> name;
	std::cout << "======================================================= " << std::endl;
	std::cout << "Do you want your squad to be public or private?" << std::endl;
	std::cin >> status;
	std::cout << "======================================================= " << std::endl;

	// Captain
	std::cout << "Give a name to the Captain" << std::endl;
	std::cin >> n;
	std::cout << "======================================================= " << std::endl;
	std::cout << "Choose the specialism you want for " << n << std::endl;
	std::cout << " - Fighting " << std::endl;
	std::cout << " - Stealth " << std::endl;
	std::cout << " - Archery"  << std::endl;
	std::cout << "======================================================= " << std::endl;

	std::cin >> sk; 
	
	
	Captain cap(n, sk);
 	members.push_back(cap);	

	// Hierophant
	std::cout << "======================================================= " << std::endl;
	std::cout << "Give a name to the Hierophant" << std::endl;
	std::cin >> n;

	std::cout << "======================================================= " << std::endl;
	std::cout << "Choose the specialism you want for " << n << std::endl;
	std::cout << " - Healing " << std::endl;
	std::cout << " - Spells " << std::endl;
	std::cout << " - Elements "  << std::endl;
	std::cout << "======================================================= " << std::endl;
	std::cin >> sk; 
	Hierophant hier(n, sk);
	members.push_back(hier);
}


const std::string Squad::get_squad_name(){
	return name;
}

const std::string Squad::get_owner(){
	return owner;
}

std::vector<Squad_member> Squad::get_squad_members(){
	return members;
}

const float Squad::get_credits(){
	return credits;
}

const std::string Squad::get_status(){
	return status;
}

void Squad::add_squad_members(Squad_member sq_mem){
	members.push_back(sq_mem);
}

void Squad::delete_squad_member(int mem_pos){
	members.erase(members.begin() + mem_pos);
}
