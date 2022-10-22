#include "User.h"
#include <iomanip>

std::istream& operator >>(std::istream& is, User& obj)
{
	is.seekg(7, std::ios_base::cur);
	is >> obj._name;
	is.seekg(-7 - obj._name.size(), std::ios_base::cur);
	is.seekg(24, std::ios_base::cur);
	is >> obj._login;
	is.seekg(-24 - obj._login.size(), std::ios_base::cur);
	is.seekg(44, std::ios_base::cur);
	is >> obj._pass;

	return is;
}
std::ostream& operator <<(std::ostream& os, const User& obj)
{
	os << "name = ";
	os << std::left << std::setw(8) << obj._name;
	os << " login = ";
	os << std::left << std::setw(8) << obj._login;
	os << " password = ";
	os << std::left << std::setw(8) << obj._pass;
	return os;
}