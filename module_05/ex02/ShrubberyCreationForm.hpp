#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public virtual Form
{
	const std::string target;
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
	
	std::string getTarget(void) const;
	bool execute(Bureaucrat const &executor) const;
	
	virtual ~ShrubberyCreationForm();
};

#endif