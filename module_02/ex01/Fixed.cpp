#include "Fixed.hpp"

Fixed::Fixed()
{
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
	return(raw / (1 << bit));
}

float Fixed::toFloat(void) const
{
	return((float)raw / (float)(1 << bit));
}

std::ostream& operator <<(std::ostream &out,const Fixed &fixed)
{
	return (out << fixed.toFloat());
}