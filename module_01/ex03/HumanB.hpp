#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *wType;

public:
	HumanB(std::string name);
	Weapon *getWeapon();
	void setWeapon(Weapon &weapon);
	~HumanB();
	void attack();
};

#endif