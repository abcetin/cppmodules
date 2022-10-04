#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hitPoints = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	this->name = "Abdullah";
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "Copy constructor" << std::endl;
	this->name = cpy.name;
	this->attackDamage = cpy.attackDamage;
	this->energyPoint = cpy.energyPoint;
	this->hitPoints = cpy.hitPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	std::cout << "Copy assignment operator" << std::endl;
	this->attackDamage = cpy.attackDamage;
	this->energyPoint = cpy.energyPoint;
	this->hitPoints = cpy.hitPoints;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoint)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
				  << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
		std::cout << "Low energy level " << this->energyPoint << " can not attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

	this->hitPoints -= amount;
	std::cout << this->name << " damage points " << amount << " take points of damage!"
			  << " total hit points " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint)
	{
		this->hitPoints += amount;
		this->energyPoint--;
		std::cout << this->name << " be repaired " << amount << " take hit points!"
				  << " total hit points " << this->hitPoints << std::endl;
	}
	else
		std::cout << "Low energy level " << this->energyPoint << " can not repaired " << std::endl;
}