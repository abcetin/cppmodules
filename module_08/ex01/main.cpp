#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(1);
	sp.addNumber(1);
	sp.addNumber(1);
	std::cout << "sp : " << sp.shortestSpan() << std::endl;
	std::cout << "sp : " << sp.longestSpan() << std::endl;
	Span sp1 = Span(10000);
	srand(time(NULL));
	for (size_t i = 0; i < 10000; i++)
		sp1.addNumber(rand() % 1000000000);
	std::cout << "sp1 : " << sp1.shortestSpan() << std::endl;
	std::cout << "sp1 : " << sp1.longestSpan() << std::endl;
	return 0;
}