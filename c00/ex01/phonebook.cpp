#include <iostream>
#include <string>
#include "PhoneBook.hpp" 

void ft_resize(std::string info)
{
	std::cout << "|";
	if (info.size() > 10)
	{
		info.resize(9);
		std::cout << info << ".";
	}
	else
		std::cout << info;
}

int main()
{
	PhoneBook phone;
	int i;
	int	x;
	std::string	input;

	phone.n = 0;

	while (1)
	{
		std::cout << "input ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;

		if (input == "ADD")
		{
			for (i = 7; i >= 0; i--)
				phone.cont[i] = phone.cont[i - 1];
			std::cout << "first name: ";
			std::cin >> phone.cont[0].first_name;
			while (phone.cont[0].first_name.size()< 10)
			{
				phone.cont[0].first_name.append(" ");
			}
			
			std::cout << "last name: ";
			std::cin >> phone.cont[0].last_name;
			while (phone.cont[0].last_name.size()< 10)
			{
				phone.cont[0].last_name.append(" ");
			}
			
			std::cout << "nickname: ";
			std::cin >> phone.cont[0].nickname;
			while (phone.cont[0].nickname.size()< 10)
			{
				phone.cont[0].nickname.append(" ");
			}
			
			std::cout << "phone number: ";
			std::cin >> phone.cont[0].phone_num;
			while (phone.cont[0].phone_num.size()< 10)
			{
				phone.cont[0].phone_num.append(" ");
			}
			
			std::cout << "darkest secret: ";
			std::cin >> phone.cont[0].dark_secret;
			while (phone.cont[0].dark_secret.size()< 10)
			{
				phone.cont[0].dark_secret.append(" ");
			}
			if (phone.n < 8)
			{
				phone.n++;
			}
		}
		else if (input == "SEARCH")
		{
			for (i = 0; i < phone.n; i++)
			{	
				std::cout << i + 1;
				ft_resize(phone.cont[i].first_name);
				ft_resize(phone.cont[i].last_name);
				ft_resize(phone.cont[i].nickname);
				std::cout << "\n";
			}
			std::cout << "Input index number:" << std::endl;
			std::cin >> x;
			if (x)
			{
				x = x - 1;
				if (x < -1 || x > phone.n)
				{
					std::cout << "Invalid input" << std::endl;
				}
				else if (x < phone.n)
				{
					std::cout << "\nContact:" << "\n" << phone.cont[x].first_name << "\n" << phone.cont[x].last_name << 
						"\n" << phone.cont[x].nickname << "\n" << phone.cont[x].phone_num << "\n" << phone.cont[x].dark_secret << "\n" << std::endl;
				}
			}
			else
			{
				std::cout << "Digits only" << std::endl;
				std::cin.clear();
				std::cin.ignore(2, '\n');
			}
		}
		else if (input == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "Invalid input" << std::endl;
		}
	}
}