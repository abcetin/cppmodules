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
    std::vector<int> cpy(this->mySpan);
    try
    {
        if (this->mySpan.size() <= 1)
            throw Span::MyException("Not Enough Argument");
        std::sort(cpy.begin(), cpy.end());
        return (cpy[1] - cpy[0]);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }
}

int Span::longestSpan(void)
{
    try
    {
        if (this->mySpan.size() <= 1)
            throw Span::MyException("Not Enough Argument");
        int max = *(std::max_element(this->mySpan.begin(), this->mySpan.end()));
        int min = *(std::min_element(this->mySpan.begin(), this->mySpan.end()));
        return max - min;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }
}

Span::~Span()
{
}