#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Harl::*action[4])(void);

public:
	void complain(std::string level);
	Harl();
	~Harl();
};


#endif