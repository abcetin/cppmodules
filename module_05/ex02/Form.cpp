#include "Form.hpp"

Form::Form() : name("Form1"), gradeRequiredToSign(80), gradeRequiredToExecute(50) {}

Form::Form(const std::string _name, const int _gradeRequiredToSign, const int _gradeRequiredToExecute) : name(_name),
																										 gradeRequiredToSign(_gradeRequiredToSign), gradeRequiredToExecute(_gradeRequiredToExecute)
{
	if (_gradeRequiredToSign < 1 || _gradeRequiredToSign > 150)
		throw Form::GradeTooHighException("Bad Grade For Sign");
	else if (_gradeRequiredToExecute < 1 || _gradeRequiredToExecute > 150)
		throw Form::GradeTooHighException("Bad Grade For Execute");
}

Form &Form::operator=(const Form &cpy)
{
	(void)cpy;
	return (*this);
}

Form::Form(const Form &cpy) : name(cpy.name), sign(cpy.sign), gradeRequiredToSign(cpy.gradeRequiredToSign),
							  gradeRequiredToExecute(cpy.gradeRequiredToExecute)
{
}

std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGradeRequiredToSign(void) const
{
	return (this->gradeRequiredToSign);
}

int Form::getGradeRequiredToExecute(void) const
{
	return (this->gradeRequiredToExecute);
}

bool Form::getSign(void) const
{
	return (this->sign);
}

bool Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
		if (this->sign)
			throw Form::GradeTooLowException("Previously Signed File");
		else if (bureaucrat.getGrade() < this->getGradeRequiredToSign())
			throw Form::GradeTooLowException("Grade Too Low Exception For Sign");
		else
			this->sign = true;
		return 1;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return 0;
	}
}

bool Form::execute(Bureaucrat const &executor) const
{
	if (!this->sign)
	{
		throw Form::GradeTooLowException("This Form Has Not Been Signed Yet");
		return 0;
	}
	else if (executor.getGrade() < this->getGradeRequiredToSign())
	{
		throw Form::GradeTooLowException("Grade Too Low Exception For Execute");
		return 0;
	}
	return 1;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	return out << form.getName() << " " << form.getSign() << " "
		<< form.getGradeRequiredToSign() << " " << form.getGradeRequiredToExecute();
}

Form::~Form() {}