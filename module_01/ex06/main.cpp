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
		return (0);
	switch (ret(av[1]))
	{
	case 0:
		harl.complain(av[1]);
		break ;
	case 1:
		harl.complain(av[1]);
		break ;
	case 2:
		harl.complain(av[1]);
		break ;
	case 3:
		harl.complain(av[1]);
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}