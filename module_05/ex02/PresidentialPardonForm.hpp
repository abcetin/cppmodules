#ifndef PRESIDENTAL_PARDON_FORM
#define PRESIDENTAL_PARDON_FORM

#include "Form.hpp"
#include <fstream>
class PresidentialPardonForm : public virtual Form
{
	const std::string target;
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
	
	std::string getTarget(void) const;
	bool execute(Bureaucrat const &executor) const;
	
	virtual ~PresidentialPardonForm();
};

#endif