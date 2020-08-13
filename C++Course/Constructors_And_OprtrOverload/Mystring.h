#pragma once


class Mystring {
private:
	char *str;		//pointer to a char[] that holds a C-style string

public:

	//constr
	Mystring();								//default
	Mystring(const char * s);				//overloaded 1 arg.
	Mystring(const Mystring &source);		//deep copy constr.
	~Mystring();                            //deconstr.
	
	//overloading = operator
	Mystring &operator=(const Mystring &rhs); //rhs = right hand side (r_value)
											
	//methods
	void display() const;

	size_t get_length() const;
	const char* get_str() const;


};