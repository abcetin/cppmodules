#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	int raw;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif