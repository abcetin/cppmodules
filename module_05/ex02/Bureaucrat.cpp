#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Abdullah"), grade(100)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1 || grade > 150)
		throw Bureaucrat::GradeTooHighException("Bad Grade For Bureaucrat");
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::upGrade(int grade)
{
	int tmp = this->grade + grade;
	try
	{
		if (grade > 150 || tmp > 150)
			throw Bureaucrat::GradeTooHighException("Grade Too High Exception");
		this->grade += grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::downGrage(int grade)
{
	int tmp = this->grade - grade;
	try
	{
		if (grade < 1 || tmp < 0)
			throw Bureaucrat::GradeTooLowException("Grade Too Low Exception");
		this->grade -= grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		if (!form.beSigned(*this))
			throw Bureaucrat::GradeTooLowException("Grade Too Low Exception for sign");
		std::cout << *this << " signed " << form << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn’t sign " << form << " because "; 
		std::cout << e.what() << '\n';
	}
	
}

void Bureaucrat::executeForm(const Form &form) const
{
	if (form.execute(*this))
		std::cout << *this << " executed " << form << std::endl;
	
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bure)
{
	return (out << bure.getName() << ", bureaucrat grade " << bure.getGrade());
}

Bureaucrat::~Bureaucrat() {}