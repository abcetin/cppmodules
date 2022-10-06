#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Exception.hpp"

class Bureaucrat
{
private:
	std::string const name;
	int grade;

public:

	class GradeTooHighException;
	class GradeTooLowException;

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	std::string getName(void) const;
	int getGrade(void) const;
	void upGrade(int grade);
	void downGrage(int grade);
	~Bureaucrat();
	
};
class Bureaucrat::GradeTooHighException : public MyException{
	public:
		GradeTooHighException(const char *msg) : MyException(msg){}
};
class Bureaucrat::GradeTooLowException : public MyException{
	public:
		GradeTooLowException(const char *msg) : MyException(msg){}
};
std::ostream &operator<<(std::ostream &out, Bureaucrat &bure);

#endif