#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
{
	*this = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	(void)cpy;
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->target;
}

bool PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
	try
	{
		Form::execute(executer);
		std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox.\n";
		return 1;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 0;
	}
}

PresidentialPardonForm::~PresidentialPardonForm() {}