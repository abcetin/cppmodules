	#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public virtual AAnimal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &cpy);
	Dog &operator=(const Dog &cpy);

	std::string getType(void) const;
	void makeSound(void) const;
	Brain *getIdeas(void) const;
	~Dog();
};

#endif