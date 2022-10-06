#include "phonebook.hpp"

int main()
{
	PhoneBook contact;
	std::string input;
	std::cout << "MY PHONE BOOK\n";
	while (input.compare("EXIT") && !std::cin.eof())
	{
		std::cout << ">$ ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			contact.add();
		else if (!input.compare("SEARCH"))
			contact.search();
		else if (!input.empty())
			std::cout << "unknown command\n";
		else
			continue;
	}
}