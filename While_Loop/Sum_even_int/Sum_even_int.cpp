/*
Write a C++ code segment using the while loop to find the sum of the even integers 2,4,6,8,...,500. 
Display the resulting sum.
*/

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int sum = 0;//tong
	while (a<=500)
	{
		sum += a;
		a = a + 2;
	}
	cout << "the resulting sum = " << sum << endl;
	return 0;
}




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
	while (ch != ' ')
	{
		++number;
		cin >> ch;
	}

	cout << "number of nonblank characters = " << number << endl;
	return 0;

}


