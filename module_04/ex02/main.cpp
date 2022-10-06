#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	const AAnimal *animals[8];
	for (size_t i = 0; i < 8; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << "-------------------" << std::endl;
	}
	
	Brain *brain, *brain1;

	brain = animals[7]->getIdeas();
	brain1 = animals[6]->getIdeas();
	brain->ideas[0] = "eyv";
	brain->ideas[1] = "yallah";
	brain1->ideas[0] = "mrrrrr";
	brain1->ideas[1] = "tısss";
	brain = animals[6]->getIdeas();
	
	animals[3]->makeSound();
	animals[4]->makeSound();

	std::cout << animals[7]->getIdeas()->ideas[0] << std::endl;
	std::cout << animals[6]->getIdeas()->ideas[1] << std::endl;
	std::cout << "-------------------" << std::endl;

	for (size_t i = 0; i < 8; i++)
		delete animals[i];
}