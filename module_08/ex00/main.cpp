#include "easyfind.hpp"

template <typename T>
int easyfind(T t, int arg)
{
	typename T::iterator it = std::find(t.begin(), t.end(), arg); // iterator bellek adresini işaret etmek için kullanılıyor
	if (*it < 0)
	 	return -1;
	return (std::distance(t.begin(), it));
}

int main()
{
	std::array<int, 4> myints = {10, 20, 30, 40};
	std::vector<char> c;
	c.push_back('a');
	c.push_back('b');
	c.push_back('c');
	std::cout <<"array   : "<< easyfind(myints, 10)<< std::endl;
	std::cout <<"array   : "<< easyfind(myints, 20)<< std::endl;
	std::cout <<"array   : "<< easyfind(myints, 30)<< std::endl;
	std::cout <<"array   : "<< easyfind(myints, 40)<< std::endl;
	std::cout << "vector : "<< easyfind(c, 'a')<< std::endl;
	std::cout << "vector : "<< easyfind(c, 'e')<< std::endl;
	// std::cout << easyfind(myints, 70)<< std::endl;
	// std::cout << easyfind(myints, 80)<< std::endl;
	// std::cout << easyfind(myints, 90)<< std::endl;
	// std::cout << easyfind(myints, 100)<< std::endl;
	
	
}