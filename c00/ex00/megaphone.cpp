#include <iostream>

int	main (int argc, char **argv)
{
	int	n;
	int	i;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			std::cout << (char)toupper(argv[n][i]);
			i++;
		}
		n++;
	}
	std::cout << "\n";
	return (0);
}