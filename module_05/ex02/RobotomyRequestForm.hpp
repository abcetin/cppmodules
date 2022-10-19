#ifndef ROBOT_MY_REQUEST_FORM_HPP
#define ROBOT_MY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <fstream>
class RobotomyRequestForm : public virtual Form
{
	const std::string target;
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
	
	std::string getTarget(void) const;
	bool execute(Bureaucrat const &executor) const;
	
	virtual ~RobotomyRequestForm();
};

#endif