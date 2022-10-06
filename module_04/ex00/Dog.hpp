	#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public virtual Animal
{
public:
	Dog();
	Dog(const Dog &cpy);
	Dog &operator=(const Dog &cpy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual	~Dog();
};

#endif