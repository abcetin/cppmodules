#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int N;
	std::vector<int> mySpan;
public:
	Span(unsigned int _N);
	Span(const Span &cpy);
	Span &operator=(const Span &cpy);
	
	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);
	~Span();
	
	class MyException : public std::exception
	{
		const char * msg;
		public:
		MyException(const char *msg) : msg(msg){}
		const char * what() const _NOEXCEPT
		{
			return msg;
		}
	};
};

#endif