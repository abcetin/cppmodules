#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av){
	
	if (ac != 4)
		return 0;
	(void) ac;
	
	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(av[1]);
	outFile.open((std::string)av[1] + ".replace", std::iostream::trunc);
	if (!inFile.is_open() || !outFile.is_open())
		return 0;
	std::stringstream stream;
	stream << inFile.rdbuf();
	std::string s = stream.str();
	size_t i = 0;
	while ((i = s.find(av[2], i)) != std::string::npos){
		s.erase(i, strlen(av[2]));
		s.insert(i, av[3]);
		i += strlen(av[3]);
	}	
	outFile << s;
	inFile.close();
	outFile.close();
	return 0;
}