#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << this->type << " type default constructor" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "miyav?" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return(this->type);
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " type destructor" << std::endl;
}