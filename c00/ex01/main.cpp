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
	{
		while (info.size() < 10)
		{
			info.append(" ");
		}
		std::cout << info;
	}
}

int main()
{
	PhoneBook phone;
	Contact	contact;
	int i;
	int x;
	std::string	input;

	phone.set_n(0);

	while (1)
	{
		std::cout << "input ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;

		if (input == "ADD")
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			
			std::cout << "one word inputs only pls" << std::endl;
			for (i = 7; i >= 0; i--)
			{
				phone.cont[i] = phone.cont[i - 1];
			}
			std::cout << "first name: ";
			std::getline (std::cin, input);
			phone.cont[0].setfirst_name(input);
			
			std::cout << "last name: ";
			std::getline (std::cin, input);
			phone.cont[0].setlast_name(input);
			
			std::cout << "nickname: ";
			std::getline (std::cin, input);
			phone.cont[0].setnickname(input);
			
			std::cout << "phone number: ";
			std::getline (std::cin, input);
			phone.cont[0].setphone_num(input);
			
			std::cout << "darkest secret: ";
			std::getline (std::cin, input);
			phone.cont[0].setdark_secret(input);
			if (phone.get_n() < 8)
			{
				phone.set_n(phone.get_n() + 1);
			}
		}
		else if (input == "SEARCH")
		{
			for (i = 0; i < phone.get_n(); i++)
			{	
				std::cout << i + 1;
				ft_resize(phone.cont[i].getfirst_name());
				ft_resize(phone.cont[i].getlast_name());
				ft_resize(phone.cont[i].getnickname());
				std::cout << "\n";
			}
			std::cout << "Input index number:" << std::endl;
			std::cin >> x;
			if (x)
			{
				x = x - 1;
				if (x < -1 || x > phone.get_n())
				{
					std::cout << "Invalid input" << std::endl;
				}
				else if (x < phone.get_n())
				{
					std::cout << "\nContact:" << "\n" << phone.cont[x].getfirst_name() << "\n" << phone.cont[x].getlast_name() << 
						"\n" << phone.cont[x].getnickname() << "\n" << phone.cont[x].getphone_num() << "\n" << phone.cont[x].getdark_secret() << "\n" << std::endl;
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