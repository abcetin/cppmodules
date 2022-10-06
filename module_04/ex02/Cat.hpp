#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public virtual AAnimal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &cpy);
	Cat &operator=(const Cat &cpy);

	std::string getType(void) const;
	void makeSound(void) const;
	Brain *getIdeas(void) const;
	~Cat();
};

#endif