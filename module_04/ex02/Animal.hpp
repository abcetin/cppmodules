#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const std::string &type);
	AAnimal(const AAnimal &cpy);
	AAnimal &operator=(const AAnimal &cpy);

	virtual std::string getType(void) const = 0;
	virtual void makeSound(void) const = 0;
	virtual Brain *getIdeas(void) const = 0;
	virtual ~AAnimal();
};

#endif