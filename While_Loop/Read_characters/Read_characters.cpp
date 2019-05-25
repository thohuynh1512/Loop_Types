/*
Write a C++ code segment to read characters from the keyboard until a blank is read. 
Use a sentinel-controlled while loop to find the number of nonblank characters read from the keyboard. 
Display the number found.
*/

#include <iostream>
using namespace std;

int main()
{
	char ch; //character is read from the keyboard
	int number = 0; //number of nonblank characrers
	cout << "type a character is ";
	cin >> ch;
	while (ch != 'a' )
	{
		++number;
		cin >> ch;
	}

	cout << "number of nonblank characters = " << number << endl;
	return 0;

}


