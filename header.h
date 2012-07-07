#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;

class Number {
public:
	Number (double num);
	virtual ~Number () {}
	
	friend ostream & operator <<(ostream & os, const Number & num);

private:
	double m_number;
};

#endif
