#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	int id;
	std::string name;
	std::string surname;
	std::string nick_name;
	std::string number;
	std::string dark_secret;

public:
	void set_id(int id);
	int get_id();
	void set_name(std::string name);
	std::string get_name();
	void set_surname(std::string surname);
	std::string get_surname();
	void set_nickname(std::string nickname);
	std::string get_nickname();
	void set_number(std::string number);
	std::string get_number();
	void set_dark_secret(std::string dark_secret);
	std::string get_dark_secret();
};

#endif
