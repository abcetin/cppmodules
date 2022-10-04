#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &cpy);
	FragTrap  &operator=(const FragTrap &cpy);

	void highFivesGuys(void);
	void attack(const std::string& target);
	virtual ~FragTrap();
};

#endif