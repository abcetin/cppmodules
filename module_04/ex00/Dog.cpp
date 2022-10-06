#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " type default constructor" << std::endl; 
}

Dog::Dog(const Dog &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

void Dog::makeSound(void) const
{
	std::cout << "hav!!!!!!!!" << std::endl;
}

std::string Dog::getType(void) const
{
	return(this->type);
}

Dog::~Dog()
{
	std::cout << this->type << " type destructor" << std::endl;
}