#pragma once

#include <string>
#include <fstream>

class Message {
    std::string _sender;
    std::string _receiver;
	std::string _text;
public:
	Message(std::string sender, std::string receiver, std::string text) : _sender(sender), _receiver(receiver), _text(text) {}

	friend std::fstream& operator >>(std::fstream& is, Message& obj);
	friend std::ostream& operator <<(std::ostream& os, const Message& obj);

	std::string getText() const;
};

