#include "phonebook.hpp"

void max_print(std::string name)
{
	std::cout.width(10);
	if (name.length() > 10)
		std::cout << name.erase(9).append(".");
	else
		std::cout << name;
}

void PhoneBook::add()
{
	static int i;

	i = i % 8;
	book[i].set_id(i + 1);
	book[i].set_name();
	book[i].set_surname();
	book[i].set_nickname();
	book[i].set_dark_secret();
	book[i].set_number();
	std::cout << "Added" << std::endl;
	i++;
}
void PhoneBook::search()
{
	std::string idc;
	int id;
	for (size_t i = 0; book[i].get_name().length() !=0 && i < 8 ; i++)
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
	{
		std::cout << "invalid id" << std::endl;
		return;
	}
	else
	{
		std::cout << book[id - 1].get_name() << std::endl;
		std::cout << book[id - 1].get_surname() << std::endl;
		std::cout << book[id - 1].get_nickname() << std::endl;
		std::cout << book[id - 1].get_dark_secret() << std::endl;
		std::cout << book[id - 1].get_number() << std::endl;
	}
}