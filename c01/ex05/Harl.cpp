#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	// pointer to member function allows access to class objects - example here creates
	// an array that provides access to the functions in the Harl class
	// this allows the complain function to easily choose which function 
	// to run when selected.
	void	(Harl::*selector[4]) (void) ={
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == options[i])
		{
			(this->*selector[i])();
			return;
		}
	}
	std::cout << "nothing to complain about we're chilling B)" << std::endl;
}