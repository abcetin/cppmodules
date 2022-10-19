#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <limits.h>

void	to_double(std::string str);
void	to_float(std::string str);
void	to_int(std::string str);
void	to_char(std::string str);
int		nanOrInf(std::string str);
#endif