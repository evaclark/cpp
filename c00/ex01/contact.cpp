#include <iostream>
#include <string>
#include "PhoneBook.hpp" 

//Getter functions to obtain private variables
std::string Contact::getfirst_name()
{
	return (this->first_name);
}
std::string Contact::getlast_name()
{
	return (this->last_name);
}
std::string Contact::getnickname()
{
	return (this->nickname);
}
std::string Contact::getphone_num()
{
	return (this->phone_num);
}
std::string Contact::getdark_secret()
{
	return (this->dark_secret);
}
//Setter functions to assign value to private variables
void	Contact::setfirst_name(std::string const name)
{
	this->first_name = name;
}
void	Contact::setlast_name(std::string const name)
{
	this->last_name = name;
}
void	Contact::setnickname(std::string const name)
{
	this->nickname = name;
}
void	Contact::setphone_num(std::string const no)
{
	this->phone_num = no;
}
void	Contact::setdark_secret(std::string const secret)
{
	this->dark_secret = secret;
}