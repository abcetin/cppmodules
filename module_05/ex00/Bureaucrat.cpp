#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Abdullah"), grade(100)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
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

std::ostream &operator<<(std::ostream &out, Bureaucrat &bure)
{
	return (out << bure.getName() << ", bureaucrat grade " << bure.getGrade());
}

Bureaucrat::~Bureaucrat() {}