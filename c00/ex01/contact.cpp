#include <iostream>
#include <string>
#include "PhoneBook.hpp" 

//Getter functions to obtain private variables
std::string Contact::getfirst_name()
{
	return (first_name);
}
std::string Contact::getlast_name()
{
	return (last_name);
}
std::string Contact::getnickname()
{
	return (nickname);
}
std::string Contact::getphone_num()
{
	return (phone_num);
}
std::string Contact::getdark_secret()
{
	return (dark_secret);
}
//Setter functions to assign value to private variables
void	Contact::setfirst_name(std::string const name)
{
	first_name = name;
}
void	Contact::setlast_name(std::string const name)
{
	last_name = name;
}
void	Contact::setnickname(std::string const name)
{
	nickname = name;
}
void	Contact::setphone_num(std::string const no)
{
	phone_num = no;
}
void	Contact::setdark_secret(std::string const secret)
{
	dark_secret = secret;
}