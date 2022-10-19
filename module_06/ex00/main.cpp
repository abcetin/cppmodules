#include "Utils.hpp"

int nanOrInf(std::string str)
{
	return (str == "nan" || str == "nanf")
		|| (str == "inf" || str == "-inf" || str == "+inf")
		|| (str == "-inff" || str == "+inff" || str == "inff");
}

int chechkValue(char  *str)
{
	float tmp;
	char *end;

	tmp = strtof(str, &end);
	if ((std::string)str == "-nan" || (std::string)str == "+nan")
		return 0;
	if ((((std::string)end).length() && end[0] != 'f') && !nanOrInf((std::string)str))
		return 0;
	return 1;
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Not Enough Argument" << std::endl;
		return 0;
	}
	else if (!chechkValue(av[1]))
	{
		std::cout << "Bad Argument" << std::endl;
		return 0;
	}
	else
	{
		to_char((std::string)av[1]);
		to_int((std::string)av[1]);
		to_float((std::string)av[1]);
		to_double((std::string)av[1]);
	}
	return 0;
}