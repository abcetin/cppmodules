#include "Weapon.hpp"


Weapon::Weapon(){
	
}

Weapon::~Weapon(){

}

Weapon::Weapon(std::string aType){
	this->type = aType;
}

const std::string &Weapon::getType(){
	std::string	&typeREF = this->type;
	return (typeREF);
}

void Weapon::setType(std::string aType){
	this->type = aType;
}