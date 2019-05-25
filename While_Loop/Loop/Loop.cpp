/*
Write a C++ code segment using the while loop to find the sum of the integers 73 through 415 inclusive. \
Display the resulting sum. Be sure to give code to declare and initialize variables used.*/

#include <iostream>
using namespace std;

int main()
{
	int a = 73;
	int sum = 0; //tong
	while (a <= 415)
	{
		sum += a;
		a++;			 
	}
	cout << "the resulting sum = " << sum << endl;
	return 0;

}



