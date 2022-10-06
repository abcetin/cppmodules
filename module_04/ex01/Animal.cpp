#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << this->type << " type default constructor" << std::endl; 
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << this->type << " type constructor" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << this->type << " type destructor" << std::endl;
}