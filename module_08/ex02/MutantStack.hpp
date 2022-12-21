#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &src) : std::stack<T>::stack(src) { *this = src; }
    virtual ~MutantStack() {}

    MutantStack& operator=(MutantStack const &src)
    {
        std::stack<T>::operator=(src);
        return *this;
    }

    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};

#endif
