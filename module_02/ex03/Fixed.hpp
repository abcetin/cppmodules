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

	Fixed &operator=(const Fixed &fixed);
	bool operator==(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator*(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	static Fixed &max(Fixed &arg1, Fixed &arg2);
	static Fixed const &max(const Fixed &arg1, const Fixed &arg2);
	static Fixed &min(Fixed &arg1, Fixed &arg2);
	static Fixed const &min(const Fixed &arg1, const Fixed &arg2);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif