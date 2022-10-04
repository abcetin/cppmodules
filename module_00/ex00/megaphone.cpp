#include "iostream"

void ft_toupper(char *s)
{
	for (size_t i = 0; s[i]; i++)
		putchar(toupper(s[i]));
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; av[i]; i++)
		{
			ft_toupper(av[i]);
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return (0);
}
