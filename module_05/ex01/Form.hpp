#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Exception.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool sign;
	const int gradeRequiredToSign;
	const int gradeRequiredToExecute;
public:

	class GradeTooHighException;
	class GradeTooLowException;

	Form();
	Form(const std::string _name, const int _gradeRequiredToSign, const int _gradeRequiredToExecute);
	Form(const Form &cpy);
	Form &operator=(const Form &cpy);
	
	std::string getName(void) const;
	int getGradeRequiredToSign(void) const;
	int getGradeRequiredToExecute(void) const;
	bool getSign(void) const;
	bool beSigned(Bureaucrat &bureaucrat); 
	
	~Form();
};

std::ostream &operator<<(std::ostream &out, const Form &form);

class Form::GradeTooHighException : public MyException{
	public:
		GradeTooHighException(const char *msg) : MyException(msg){}
};

class Form::GradeTooLowException : public MyException{
	public:
		GradeTooLowException(const char *msg) : MyException(msg){}
};
#endif