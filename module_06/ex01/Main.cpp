#include "Convert.hpp"

int main(void)
{
	Data data;
	Data *temp;

	data.i = 100;
	temp = deserialize(serialize(&data));
	std::cout << temp->i<< std::endl;
	std::cout << data.i<< std::endl; 
}