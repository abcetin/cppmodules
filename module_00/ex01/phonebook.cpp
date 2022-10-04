#include "phonebook.hpp"

void max_print(std::string name)
{
	std::cout.width(10);
	if (name.length() > 10)
		std::cout << name.erase(9).append(".");
	else
		std::cout << name;
}

void print_all(Contact person)
{
	std::cout.width(10);
	std::cout << person.get_id() << "|";
	std::cout.width(10);
	std::cout << person.get_name() << "|";
	std::cout.width(10);
	std::cout << person.get_surname() << "|";
	std::cout.width(10);
	std::cout << person.get_nickname() << "|";
	std::cout.width(10);
	std::cout << person.get_number() << "|";
	std::cout.width(10);
	std::cout << person.get_dark_secret() << "|" << std::endl;
}

void PhoneBook::add(Contact person)
{
	static int i;

	i = i % 8;
	book[i].set_id(i + 1);
	book[i].set_name(person.get_name());
	book[i].set_surname(person.get_surname());
	book[i].set_nickname(person.get_nickname());
	book[i].set_dark_secret(person.get_dark_secret());;
	book[i].set_number(person.get_number());
	std::cout << "Added" << std::endl;
	i++;
}
void PhoneBook::search()
{
	std::string idc;
	int id;
	for (size_t i = 0; book[i].get_name().length() !=0 ; i++)
	{
		std::cout.width(10);
		std::cout << book[i].get_id() << "|";
		max_print(book[i].get_name());
		std::cout << "|";
		max_print(book[i].get_surname());
		std::cout << "|";
		max_print(book[i].get_nickname());
		std::cout << "|";
		std::cout << "\n";
	}
	std::cout << "ID : ";
	getline(std::cin, idc, '\n');
	id = atoi(idc.c_str());
	if (book[id - 1].get_name().length() == 0 || id > 8 || id < 1)
		return;
	else
		print_all(book[id - 1]);
}