#include "phonebook.hpp"

std::string &trim(std::string &str)
{
	str.erase(str.find_last_not_of(" ") + 1);
	str.erase(0, str.find_first_not_of(" "));
	return (str);
}

int main()
{
	Contact	person;
	PhoneBook 	contact;
	std::string input, name, surname, nick_name, number, dark_secret;

	std::cout << "MY PHONE BOOK\n";
	while (input.compare("EXIT") && !std::cin.eof())
	{
		std::cout << ">$ ";
		std::getline(std::cin, input);
		if(!input.compare("ADD"))
		{
			std::cout << "NAME : ";
			std::getline(std::cin, name);
			name = trim(name);
			person.set_name(name);
			std::cout << "SURNAME : ";
			std::getline(std::cin, surname);
			surname = trim(surname);
			person.set_surname(surname);
			std::cout << "NICK NAME : ";
			std::getline(std::cin, nick_name);
			nick_name = trim(nick_name);
			person.set_nickname(nick_name);
			std::cout << "NUMBER : ";
			std::getline(std::cin, number);
			number = trim(number);
			person.set_number(number);
			std::cout << "DARK SECRET : ";
			std::getline(std::cin, dark_secret);
			dark_secret = trim(dark_secret);
			person.set_dark_secret(dark_secret);
			if (name.empty() && surname.empty() && nick_name.empty()
				&& number.empty() && dark_secret.empty())
				contact.add(person);
		}
		else if (!input.compare("SEARCH"))
			contact.search();
		else if(!input.empty())
			std::cout << "unknown command\n";
		else
			continue;
	}
}