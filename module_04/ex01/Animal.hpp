#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &cpy);
	Animal &operator=(const Animal &cpy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual Brain *getIdeas(void) const = 0;
	virtual ~Animal();
};

#endif