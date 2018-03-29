#include "users.hpp"
#include "squad.hpp"


Player::Player(std::string u, std::string p, std::string e) 
	: username(u),
       	  password(p),
	  email(e){

	Squad sq(u);
	squad_vector.push_back(sq);
}

const std::string Player::get_username(){
	return username;
}

const std::string Player::get_password(){
	return password;
}

const std::string Player::get_email(){
	return email;
}

const std::vector<Squad> Player::get_squad_vector(){
	return squad_vector;
}

void Player::delete_squad(int sq_pos){
	squad_vector.erase(squad_vector.begin() + sq_pos);

}

void Player::add_squad(Squad sq){
	squad_vector.push_back(sq);
}

void Player::add_squad_member(std::string mm_name, int sq_pos){
	Squad_member sq_member(mm_name);
	squad_vector[sq_pos].add_squad_members(sq_member);
}

void Player::delete_squad_member(int sq_pos, int mem_pos){
	squad_vector[sq_pos].delete_squad_member(mem_pos);
}


void Player::set_username(std::string u){
	username = u;
}

void Player::set_password(std::string pas){
	password = pas;
}

void Player::set_email(std::string e){
	email = e;
}




