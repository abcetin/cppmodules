#include <iostream>
#include <fstream>

int fileSize(char *path)
{
	std::ifstream file;
	int i;

	i = 0;
	file.open(path, std::ifstream::ate);
	if (file.is_open())
	{
		i = file.tellg();
		file.close();
	}
	else
		std::cout << "file not found" << std::endl;
	return (i);
}

int is_exist(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] && s1[i] == s2[i])
		i++;
	if (!s2[i])
		return (i);
	return (0);
}

char *replace(char *file, char *s1, char *s2)
{
	int i;
	int j;
	int z;
	char *ret = new char;

	i = 0;
	z = 0;
	while (file[i])
	{
		if (is_exist(&file[i], s1))
		{
			j = 0;
			while(s2[j])
				ret[z++] = s2[j++];
			i += strlen(s1);
		}
		ret[z++] = file[i++];
	}
	ret[z] = '\0';
	return (ret);
}

char	*newStr(char *path, char *s1, char *s2)
{
	std::fstream file;
	char *s = new char[fileSize(path)];
	char *r;
	int size;

	size = fileSize(path);
	if (size)
	{
		file.open(path, std::fstream::in);
		file.read(s, size + 1);
		file.close();
		r = replace(s, s1, s2);
		delete[] s;
		return(r);
	}
	delete[] s;
	return(NULL);
}

void writeFile(char *path, char *str)
{
	std::string oldPath = path;
	std::ofstream	file(oldPath + ".replace");
	
	if(file.is_open())
	{
		file << str;
		file.close();
	}
	delete str;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (fileSize(av[1]))
			writeFile(av[1], newStr(av[1], av[2], av[3]));
	}
	else
		std::cout << "bad argumant" << std::endl;
}