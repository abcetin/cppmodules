#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	T *_arr;
	unsigned int _len;

public:
	Array();
	Array<T>(unsigned int n);
	Array(const Array &arr);
	Array &operator=(const Array &arr);
	T &operator[](int index);
	unsigned int size(void);
	~Array();

	class MyException : public std::exception
	{
	private:
		const char *msg;

	public:
		MyException(const char *msg) : msg(msg) {}
		const char *what() const _NOEXCEPT
		{
			return msg;
		}
	};
};

#endif