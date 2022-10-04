#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoint;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &cpy);
	ClapTrap &operator=(const ClapTrap &cpy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};

#endif