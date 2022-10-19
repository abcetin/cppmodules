#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

typedef struct s_Data
{
	int i;
} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif