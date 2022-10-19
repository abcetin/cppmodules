#include "Harl.hpp"

int ret(char *str)
{
	std::string value[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if(!strcmp(value[i].c_str(), str))
			return(i);
	}
	return(-1);
}

int main(int ac, char **av)
{
	Harl harl;

	if (ac == 1)
	{	
		std::cout << "[ Not Enough Argument ]" << std::endl;
		return 0;
	}
	switch (ret(av[1]))
	{
	case 0:
		harl.complain("debug");
	case 1:
		harl.complain("info");
	case 2:
		harl.complain("warning");
	case 3:
		harl.complain("error");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}