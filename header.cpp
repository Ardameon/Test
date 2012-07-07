#include "header.h"

Number::Number (double num)
{
	m_number = num;
}

ostream & operator <<(ostream & os, const Number & num)
{
	os << num.m_number;
	return os;
}
