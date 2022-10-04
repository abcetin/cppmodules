#include "Fixed.hpp"

Fixed::Fixed()
{
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw = fixed.raw;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw);
}

void Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

Fixed::Fixed(const int raw)
{
	std::cout<< "Int constructor called" << std::endl;
	this->raw = (raw * (1 << bit));
}

Fixed::Fixed(const float raw)
{
	std::cout<< "Float constructor called" << std::endl;
	this->raw = roundf((raw * (1 << bit)));
}

int Fixed::toInt (void) const
{
	return(this->raw / (1 << bit));
}

float Fixed::toFloat(void) const
{
	return((float)this->raw / (float)(1 << bit));
}

std::ostream& operator <<(std::ostream &out,const Fixed &fixed)
{
	return (out << fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (fixed.toFloat() == this->toFloat())
		return (true);
	return(false);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return(false);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return(false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return(false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return(false);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (fixed.toFloat() != this->toFloat())
		return (true);
	return(false);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return((Fixed)(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return((Fixed)(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return((Fixed)(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return((Fixed)(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator++(void)
{
	Fixed up;

	up.raw = ++this->raw;
	return(up);
}

Fixed Fixed::operator++(int)
{
	Fixed up;

	up.raw = this->raw++;
	return(up);
}

Fixed Fixed::operator--(void)
{
	Fixed up;

	up.raw = --this->raw;
	return(up);
}

Fixed Fixed::operator--(int)
{
	Fixed up;

	up.raw = this->raw--;
	return(up);
}

Fixed &Fixed::max(Fixed &arg1, Fixed &arg2)
{
	if (arg1 < arg2)
		return(arg2);
	else
		return(arg1);
}

Fixed const &Fixed::max(const Fixed &arg1, const Fixed &arg2)
{
	if (arg1 < arg2)
		return(arg2);
	else
		return(arg2);
}

Fixed &Fixed::min(Fixed &arg1, Fixed &arg2)
{
	if (arg1 < arg2)
		return(arg1);
	else
		return(arg2);
}

Fixed const &Fixed::min(const Fixed &arg1, const Fixed &arg2)
{
	if (arg1 < arg2)
		return(arg1);
	else
		return(arg2);
}