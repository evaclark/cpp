//make vector to store phonebook info?
//.push_back() to add info
//.pop_back() to remove info

//array of vectors for each contact?
//max of 8 - oldest is replaced if adding a new one

#include <iostream>
#include <string>
#include "PhoneBook.hpp" 

int main()
{
	PhoneBook phone;
	int i;
	std::string	input;
	
	std::cout << "input ADD, SEARCH or EXIT" << std::endl;
	std::cin >> input;

	while (1)
	{
		if (input == "ADD")
		{
			
		}
		else if (input == "SEARCH")
		{

		}
		else if (input == "EXIT")
		{
			break ;
		}
	}

}