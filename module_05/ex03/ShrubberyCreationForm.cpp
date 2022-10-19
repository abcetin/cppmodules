#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
{
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	(void)cpy;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->target;
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		Form::execute(executor);
		std::ofstream file;
		file.open(this->getTarget() + "_shrubbery", std::ios::trunc);
		file << "                                                    	 ." << std::endl;
		file << "                                              .         ;" << std::endl;
		file << "                 .              .              ;%     ;;" << std::endl;
		file << "                   ,           ,                :;%  %;" << std::endl;
		file << "                    :         ;                   :;%;'     .," << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
		file << "              ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                     `@%:.  :;%.         ;@@%;'" << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
		file << "                          `@%%. `@%%    ;@@%;" << std::endl;
		file << "                            ;@%. :@%%  %@@%;" << std::endl;
		file << "                              %@bd%%%bd%%:;" << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                %@@%%%::;" << std::endl;
		file << "                                %@@@%(o);  . '" << std::endl;
		file << "                                %@@@o%;:(.,'" << std::endl;
		file << "                            `.. %@@@o%::;" << std::endl;
		file << "                               `)@@@o%::;" << std::endl;
		file << "                                %@@(o)::;" << std::endl;
		file << "                               .%@@@@%::;" << std::endl;
		file << "                               ;%@@@@%::;." << std::endl;
		file << "                              ;%@@@@%%:;;;." << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
		file.close();
		std::cout << "execute shrubbery\n";
		return 1;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << "\n";
		return 0;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}