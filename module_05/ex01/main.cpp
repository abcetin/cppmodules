#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void)
{
	try
	{
		Bureaucrat cetin("Abdullah", 200);
		Form form("secret", 500, 100);
		std::cout << form << std::endl;
		std::cout << cetin << std::endl;
		cetin.signForm(form);
		std::cout << form << std::endl;
		std::cout << cetin << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << "\n";
	}
}