#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &cpy);
	WrongAnimal &operator=(const WrongAnimal &cpy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual ~WrongAnimal();
};

#endif