#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	int guardMode;

public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &cpy);
	ScavTrap &operator=(const ScavTrap &cpy);

	virtual void guardGate();
	virtual void takeDamage(unsigned int amount);
	virtual void attack(const std::string& target);
	virtual ~ScavTrap();
};

#endif