#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP


#include "contact.hpp"

class PhoneBook
{
	Contact book[8];

public:
	void add(Contact person);
	void search();
};

#endif