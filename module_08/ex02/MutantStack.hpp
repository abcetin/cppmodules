#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
class MutantStack : public std::stack
{
	std::vector<T> myStack;
public:
	MutantStack();
	~MutantStack();
	
	
	void push(T arg);
	void pop(T arg);
};

#endif