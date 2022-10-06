#include "Animal.hpp"

AAnimal::AAnimal()
{
	this->type = "AAnimal";
	std::cout << this->type << " type default constructor" << std::endl; 
}

AAnimal::AAnimal(const std::string &type)
{
	this->type = type;
	std::cout << this->type << " type constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	*this = cpy;
	std::cout << this->type << " type copy constructor" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &cpy)
{
	std::cout << this->type << " type operator copy assignment operator" << std::endl;
	this->type = cpy.type;
	return(*this);
}

AAnimal::~AAnimal()
{
	std::cout << this->type << " type destructor" << std::endl;
}