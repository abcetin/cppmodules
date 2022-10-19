#include "Span.hpp"

Span::Span(unsigned int _N)
{
	this->N = _N;
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span &Span::operator=(const Span &cpy)
{
	this->N = cpy.N;
	this->mySpan = cpy.mySpan;
	return *this;
}

void Span::addNumber(int Number)
{
	try
	{
		if (this->mySpan.size() < this->N)
			this->mySpan.push_back(Number);
		else
			throw Span::MyException("no enough space");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan(void)
{
	int first, last, min;
	std::sort(this->mySpan.begin(), this->mySpan.end());
	std::vector<int>::iterator it;
	for (it = this->mySpan.begin(); it < this->mySpan.end(); it++)
	{
		if ((it + 2) < this->mySpan.end())
		{
			first = *(it + 1) - *it;
			last = *(it + 2) - *(it + 1);
		}
		if (first < last)
			min = first;
		else
			min = last;
	}
	
	return min;
	
}

int Span::longestSpan(void)
{
	std::sort(this->mySpan.begin(), this->mySpan.end());
	int max = *(this->mySpan.end() - 1);
	int min = *this->mySpan.begin();
	return max - min;
}

Span::~Span()
{
}