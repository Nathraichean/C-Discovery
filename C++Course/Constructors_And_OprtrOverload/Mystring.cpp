
#include "pch.h"
#include <cstring>
#include <iostream>
#include "Mystring.h"
#pragma warning(disable: 4996)

//No args constr ; default
Mystring::Mystring() 
	: str{nullptr} {
	str = new char[1];
	*str = '\0';
}

//overloaded constr 1 arg.
Mystring::Mystring(const char* s) 
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[ std::strlen(s) + 1 ];
		std::strcpy(str, s);
	}
}

//Copy constr
Mystring::Mystring(const Mystring &source) : str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

//destructor
Mystring::~Mystring() {
	delete [] str;
}

//overloading = operator
Mystring & Mystring::operator=(const Mystring & rhs)
{
	std::cout << "Copy assigment" << std::endl;
	if (this == &rhs)
		return *this;

	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
}

void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}

const char* Mystring::get_str() const { return str; }
size_t Mystring::get_length() const { return std::strlen(str); }
