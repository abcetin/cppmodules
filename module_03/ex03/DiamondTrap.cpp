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
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
    printf("%d %d %d\n",hitPoints, energyPoint, attackDamage);
	std::cout << "Name constructor for DiamondTrap called" << std::endl;
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
	std::cout << "Who Am I : " << this->name << std::endl;
	std::cout << "Who Am I : " << this->ClapTrap::name;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}