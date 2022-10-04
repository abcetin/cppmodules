#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->guardMode = 0;
	this->name = "Abdullah";
	this->attackDamage = 20;
	this->hitPoints = 100;
	this->energyPoint = 50;
	std::cout << "ScavTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->guardMode = 0;
	this->name = name;
	this->attackDamage = 20;
	this->hitPoints = 100;
	this->energyPoint = 50;
	std::cout << "ScavTrap constructor" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	this->guardMode = cpy.guardMode;
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->energyPoint = cpy.energyPoint;
	this->attackDamage = cpy.attackDamage;
	std::cout << "ScavTrap Copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
	this->guardMode = cpy.guardMode;
	this->name = cpy.name;
	this->hitPoints = cpy.hitPoints;
	this->energyPoint = cpy.energyPoint;
	this->attackDamage = cpy.attackDamage;
	std::cout << "ScavTrap Copy assignment operator" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap  Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
	this->guardMode = 1;
	std::cout << "Guard Mode Active"<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
				  << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint -= this->energyPoint / 10;
	}
	else
		std::cout << "Low energy level " << this->energyPoint << " can not attack " << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->guardMode)
	{	
		std::cout << "missed" << std::endl;
		this->guardMode = 0;
	}
	else
		ClapTrap::takeDamage(amount);
}