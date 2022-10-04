#include "contact.hpp"

void Contact::set_id(int id)
{
	this->id = id;
}
int Contact::get_id()
{
	return (this->id);
}

void Contact::set_name(std::string name)
{
	if (name.empty())
		std::cout << "cannot be empty" << std::endl;
	else
		this->name = name;
}
std::string Contact::get_name()
{
	return (this->name);
}

void Contact::set_surname(std::string surname)
{
	if (surname.empty())
		std::cout << "cannot be empty" << std::endl;
	else
		this->surname = surname;
}

std::string Contact::get_surname()
{
	return (this->surname);
}

void Contact::set_nickname(std::string nickname)
{
	if (nickname.empty())
		std::cout << "cannot be empty" << std::endl;
	else
		this->nick_name = nickname;
}

std::string Contact::get_nickname()
{
	return (this->nick_name);
}

void Contact::set_number(std::string number)
{
	if (number.empty())
		std::cout << "cannot be empty" << std::endl;
	else
		this->number = number;
}

std::string Contact::get_number()
{
	return (this->number);
}

void Contact::set_dark_secret(std::string dark_secret)
{
	if (dark_secret.empty())
		std::cout << "cannot be empty" << std::endl;
	else
		this->dark_secret = dark_secret;
}

std::string Contact::get_dark_secret()
{
	return (this->dark_secret);
}