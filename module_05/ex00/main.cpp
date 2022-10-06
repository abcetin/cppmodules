#include "Bureaucrat.hpp"
#include <iostream>
#include <vector>
int main(void)
{
	Bureaucrat cetin("Abdullah", 150);

	std::cout << cetin << std::endl;
	cetin.getName();
	cetin.getGrade();

	cetin.upGrade(150);
	std::cout << cetin << std::endl;
	std::cout << "-----------------\n";
	cetin.downGrage(-10);
	std::cout << cetin << std::endl;
	std::cout << "-----------------\n";
	cetin.upGrade(10);
	std::cout << cetin << std::endl;
	std::cout << "-----------------\n";
	cetin.downGrage(10);
	std::cout << cetin << std::endl;
	return 0;
}