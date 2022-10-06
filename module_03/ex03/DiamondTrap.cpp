#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "CETIN";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	*this = cpy;
	std::cout << "DiamondTrap cpy constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy)
{
	std::cout << "DiamondTrap Copy assignment operator" << std::endl;
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->energyPoint = cpy.energyPoint;
	this->attackDamage = cpy.attackDamage;
	return(*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Who Am I : " << this->name;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}