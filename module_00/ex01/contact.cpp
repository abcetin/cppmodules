#include "contact.hpp"

std::string input;

std::string &trim(std::string &str)
{
	str.erase(str.find_last_not_of(" ") + 1);
	str.erase(0, str.find_first_not_of(" "));
	return (str);
}

void Contact::set_id(int id)
{
	this->id = id;
}
int Contact::get_id()
{
	return (this->id);
}

void Contact::set_name()
{
	while (1)
	{
		std::cout << "NAME : ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "cannot be empty" << std::endl;
		else break;
	}
	this->name = input;
}
std::string Contact::get_name()
{
	return (this->name);
}

void Contact::set_surname()
{
	while (1)
	{
		std::cout << "SURNAME : ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "cannot be empty" << std::endl;
		else break;
	}
	this->surname = input;
}

std::string Contact::get_surname()
{
	return (this->surname);
}

void Contact::set_nickname()
{
	while (1)
	{
		std::cout << "NICK NAME : ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "cannot be empty" << std::endl;
		else break;
	}
	this->nick_name = input;
}

std::string Contact::get_nickname()
{
	return (this->nick_name);
}

void Contact::set_number()
{
	while (1)
	{
		std::cout << "NUMBER : ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "cannot be empty" << std::endl;
		else break;
	}
	this->number = input;
}

std::string Contact::get_number()
{
	return (this->number);
}

void Contact::set_dark_secret()
{
	while (1)
	{
		std::cout << "DARKEST SECRET : ";
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "cannot be empty" << std::endl;
		else break;
	}
	this->dark_secret = input;
}

std::string Contact::get_dark_secret()
{
	return (this->dark_secret);
}