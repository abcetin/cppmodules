#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " type default constructor" << std::endl; 
}

Cat::Cat(const Cat &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miyav!!!!!!!!" << std::endl;
}

std::string Cat::getType(void) const
{
	return(this->type);
}

Cat::~Cat()
{
	std::cout << this->type << " type destructor" << std::endl;
}