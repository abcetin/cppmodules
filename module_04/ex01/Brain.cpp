#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(const Brain &cpy)
{	
	std::cout << "Brain copy assignment operator" << std::endl;
	for (size_t i = 0; !cpy.ideas[i].empty() && i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return(*this);
}


Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}