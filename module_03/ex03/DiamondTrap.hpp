#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:

	DiamondTrap();
	DiamondTrap(const DiamondTrap &cpy);
	DiamondTrap(const std::string &name);
	DiamondTrap &operator=(const DiamondTrap &cpy);

	void whoAmI(void);
	void attack(const std::string& target);

	~DiamondTrap();
};

#endif