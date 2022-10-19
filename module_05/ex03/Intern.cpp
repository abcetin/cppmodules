#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern &Intern::operator=(const Intern &cpy)
{
	(void)cpy;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *newForm;

	newForm = NULL;
	try
	{
		int i;
		std::string forms[3] = {"robotomy request", "shrubbery creation", "presidental pardon"};
		for (i = 0; i < 3; i++)
		{
			if (name == forms[i])
				break;
		}
		switch (i)
		{
		case 0:
			newForm = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << *newForm << std::endl;
			return newForm;
		case 1:
			newForm = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << *newForm << std::endl;
			return newForm;
		case 2:
			newForm = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << *newForm << std::endl;
			return newForm;
		default : 
			throw Intern::InternException("Form Not Found");
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return newForm;
}

Intern::~Intern() {}