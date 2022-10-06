#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public virtual Animal
{
public:
	Cat();
	Cat(const Cat &cpy);
	Cat &operator=(const Cat &cpy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual	~Cat();
};

#endif