// tinh tong 50 so chan dau tien bat dau tu so 2
//

#include <iostream>
using namespace std;

int main()
{
	int j = 2;
	int sum = 0; //tong
	for (int i = 1; i <= 50; i++)
	{
		sum += j;
		j = j + 2;
	}
	cout << "tong 50 so chan dau tien bat dau tu so 2: " << sum;
	return 0;
}

