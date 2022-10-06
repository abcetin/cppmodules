#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << this->type << " type default constructor" << std::endl; 
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	this->type = type;
	std::cout << this->type << " type constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "the WrongAnimal made a sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}


WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " type destructor" << std::endl;
}