#include "Utils.hpp"

void to_double(std::string str)
{
	double tmp = strtod(str.c_str(), NULL);
	if ((tmp != (-1 * std::numeric_limits<float>::infinity()) && tmp != std::numeric_limits<float>::infinity())
		&& (str.find("0", str.find(".", 0)) != std::string::npos || str.find(".") == std::string::npos)  && !nanOrInf(str))
		std::cout << "double	: " << tmp << ".0" << std::endl;
	else
		std::cout << "double	: " << tmp << std::endl;
}

void to_float(std::string str)
{
	float tmp = strtof(str.c_str(), NULL);
	if ((tmp != (-1 * std::numeric_limits<float>::infinity()) && tmp != std::numeric_limits<float>::infinity())
		&& (str.find("0", str.find(".", 0)) != std::string::npos || str.find(".") == std::string::npos)  && !nanOrInf(str))
		std::cout << "float	: " << tmp << ".0";
	else
		std::cout << "float	: " << tmp;
	std::cout << "f" << std::endl;
}

void to_int(std::string str)
{
	if (nanOrInf(str))
	{
		std::cout << "int	: impossible" << std::endl;
		return;
	}
	long tmp = atol(str.c_str());
	if (tmp < INT_MAX && tmp > INT_MIN)
		std::cout << "int	: " << tmp << std::endl;
	else
		std::cout << "int	: impossible" << std::endl;
}

void to_char(std::string str)
{
	if (nanOrInf(str))
	{
		std::cout << "char	: impossible" << std::endl;
		return;
	}
	int tmp = atol(str.c_str());
	if (tmp >= 33 && tmp <= 127)
		std::cout << "char	: '" << (char)tmp << "'" << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
}
