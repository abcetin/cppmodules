#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *wType;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	~HumanB();
	void attack();
};

#endif