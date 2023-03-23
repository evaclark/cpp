#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_num;
		std::string	dark_secret;

	public:
		//Getter functions to obtain private variables
		std::string getfirst_name();
		std::string getlast_name();
		std::string getnickname();
		std::string getphone_num();
		std::string getdark_secret();
		//Setter functions to assign value to private variables
		void	setfirst_name(std::string const name);
		void	setlast_name(std::string const name);
		void	setnickname(std::string const name);
		void	setphone_num(std::string const no);
		void	setdark_secret(std::string const secret);
};

#endif