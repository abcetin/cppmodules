#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robot My Requset", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
{
	*this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	(void)cpy;
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->target;
}

bool RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
	try
	{
		Form::execute(executer);
		std::cout << "trrrrr ta ta ta ta pata pata pata\n";
		std::cout << this->getTarget() << " has been robotomized successfully 50% of the time\n";
		return 1;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 0;
	}
}

RobotomyRequestForm::~RobotomyRequestForm() {}