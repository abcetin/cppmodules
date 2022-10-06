#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public virtual WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &cpy);

	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual	~WrongCat();
};

#endif