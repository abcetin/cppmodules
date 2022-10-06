#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	
	std::cout << "-----------------------" << std::endl;
	const WrongAnimal *animal = new WrongAnimal();
	const WrongCat *cat = new WrongCat();
	
	animal->makeSound();
	std::cout << animal->getType() << std::endl;
	cat->makeSound();
	std::cout << cat->getType() << std::endl;
}