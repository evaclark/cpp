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
	Contact	contact;
	int i;
	int	x;
	std::string	input;
	std::string	f_n;
	std::string	l_n;
	std::string	n_n;
	std::string	p_n;
	std::string	d_s;

	phone.n = 0;

	while (1)
	{
		std::cout << "input ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;

		if (input == "ADD")
		{
			std::cout << "first name: ";
			std::getline (std::cin, f_n);
			while (f_n.size()< 10)
			{
				f_n.append(" ");
			}
			contact.setfirst_name(f_n);
			
			std::cout << "last name: ";
			std::getline (std::cin, l_n);
			while (l_n.size()< 10)
			{
				l_n.append(" ");
			}
			contact.setlast_name(l_n);
			
			std::cout << "nickname: ";
			std::getline (std::cin, n_n);
			while (n_n.size()< 10)
			{
				n_n.append(" ");
			}
			contact.setnickname(n_n);
			
			std::cout << "phone number: ";
			std::getline (std::cin, p_n);
			while (p_n.size()< 10)
			{
				p_n.append(" ");
			}
			contact.setphone_num(p_n);
			
			std::cout << "darkest secret: ";
			std::getline (std::cin, d_s);
			while (d_s.size()< 10)
			{
				d_s.append(" ");
			}
			contact.setdark_secret(d_s);
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
				ft_resize(phone.cont[i].getfirst_name);
				ft_resize(phone.cont[i].getlast_name);
				ft_resize(phone.cont[i].getnickname);
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
					std::cout << "\nContact:" << "\n" << phone.cont[x].getfirst_name << "\n" << phone.cont[x].getlast_name << 
						"\n" << phone.cont[x].getnickname << "\n" << phone.cont[x].getphone_num << "\n" << phone.cont[x].getdark_secret << "\n" << std::endl;
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