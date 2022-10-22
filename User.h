#pragma once

#include <string>
#include <fstream>

class User {
    std::string _name;
    std::string _login;
    std::string _pass;
public:
	User(std::string name, std::string login, std::string pass) :_name(name), _login(login), _pass(pass) {}

	friend std::istream& operator >>(std::istream& is, User& obj);
	friend std::ostream& operator <<(std::ostream& os, const User& obj);
};

