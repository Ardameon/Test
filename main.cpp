#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "header.h"

using namespace std;

template <class type>
void swap(type *a, type *b)
{
	type tmp = *a;
	*a = *b;
	*b = tmp;
}

template <class type>
void print_arr(type *arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << left << setprecision(4) <<  arr[i] << " ";
	}

	cout << endl;
}

template <class type>
void swap_arr(type *arr, int size)
{
	for (int i = 1; i < size; i++) {
		swap(arr + (i - 1), arr + i);
	}
}

template <class type>
void fill_rand(type *arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = (type)((double)rand() / RAND_MAX) * 100;
	}
}

int main(int argc, const char *argv[])
{
	const int size = 20;
	Number n = 25.0;
	double *a;
	
	srand(time(0) + getpid());

	cout << "Number = " << hex << n << endl;
	cout << "Number in hexogonal = " << hex << 25 << endl;
	cout << endl;

	a = new double[size];

	fill_rand(a, size);
	swap_arr(a, size);
	print_arr(a, size);

	delete[] a;

	return 0;
}
