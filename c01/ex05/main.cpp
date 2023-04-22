#include "Harl.hpp"

int	main()
{
    Harl    harl;
    std::string str;

	std::cout << "pls input DEBUG INFO WARNING or ERROR - only takes caps" << std::endl;
    std::cin >> str;
    harl.complain(str);
    return (0);
}