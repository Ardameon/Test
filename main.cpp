#include <iostream>
#include <iomanip>
#include "header.h"

using namespace std;

int main(int argc, const char *argv[])
{
	Number n = 25.0;
	cout << "Number = " << hex << n << endl;
	cout << "Number in hexogonal = " << hex << 25 << endl;
	return 0;
}
