#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
int main(void)
{

		Bureaucrat cetin("Abdullah", 150);
		Bureaucrat mete("Metehan", 75);
		Bureaucrat furkan("Furkan", 30);

		ShrubberyCreationForm form("Tree");
		RobotomyRequestForm form2("Denyo");
		PresidentialPardonForm form3("Forgive");
		
		std::cout << form << std::endl;
		std::cout << cetin << std::endl;
		cetin.executeForm(form);
		cetin.signForm(form);
		form.execute(cetin);
		std::cout << form << std::endl;
		std::cout << "-----------------------------\n";
		
		std::cout << form2 << std::endl;
		std::cout << mete << std::endl;
		form2.execute(mete);
		mete.signForm(form2);
		form2.execute(mete);
		std::cout << form2 << std::endl;
		std::cout << "-----------------------------\n";
		
		std::cout << form3 << std::endl;
		std::cout << furkan << std::endl;
		form3.execute(furkan);
		mete.signForm(form3);
		form3.execute(furkan);
		std::cout << form3 << std::endl;
		std::cout << "-----------------------------\n";
		
		form.beSigned(mete);
		form.execute(mete);
		std::cout << "-----------------------------\n";
		
		Form *form4 = new ShrubberyCreationForm("saksı");
		std::cout << *form4 << std::endl;
		form4->execute(mete);
		std::cout << "-----------------------------\n";
		
		mete.executeForm(form);
		cetin.executeForm(form3);
		delete form4;

}