#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>

class MyException : public std::exception
{
protected:
	const char *mesage;

public:
	MyException(const char *msg) : mesage(msg) {}
	const char *what() const _NOEXCEPT
	{
		return mesage;
	}
};
#endif