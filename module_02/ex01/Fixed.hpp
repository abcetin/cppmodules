#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	int raw;
	static const int bit = 8;

public:
	Fixed();
	Fixed(const int raw);
	Fixed(const float raw);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed& operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator <<(std::ostream &out,const Fixed &fixed);
#endif