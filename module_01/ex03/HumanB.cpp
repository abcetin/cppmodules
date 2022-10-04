#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->wType = &weapon;
}

Weapon *HumanB::getWeapon()
{
	return(this->wType);
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->getWeapon()->getType() << std::endl;
}