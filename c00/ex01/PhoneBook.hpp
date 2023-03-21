#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact {

	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	dark_secret;

};

class PhoneBook {

	public:
		Contact cont[8];
		int		n;
};

#endif