#include "Bureaucrat.hpp"
#include "Intern.hpp"
int main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	Form* rrf2;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	Bureaucrat cetin("Abdullah", 100);
	cetin.signForm(*rrf);
	cetin.executeForm(*rrf);
	
	rrf2 = someRandomIntern.makeForm("shrubbery creation", "Tree");
	std::cout << *rrf2 << std::endl;
	cetin.signForm(*rrf2);
	cetin.executeForm(*rrf2);
}