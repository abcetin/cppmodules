#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->wType = &weapon;
	this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	if (this->wType)
		std::cout << this->name << " attacks with their " << this->wType->getType() << std::endl;
}
