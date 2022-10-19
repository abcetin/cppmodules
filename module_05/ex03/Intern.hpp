#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	class InternException : public MyException
	{
	public:
		InternException(const char *msg) : MyException(msg) {}
	};
	Intern();
	Intern(const Intern &cpy);
	Intern &operator=(const Intern &cpy);
	Form *makeForm(std::string name, std::string target);
	~Intern();
};

#endif