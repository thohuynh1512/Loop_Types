// nhap so N va kiem tra N co phai la so nguyen to hay khong?
#include <iostream>
using namespace std;

int main()
{
	int N, counter = 0;
	cout << "Nhap so N: ";
	cin >> N;
	if (N < 2) {
		cout << " N khong la so nguyen to" << endl;
	}
	else if (N == 2)
	{
		cout << "N la so nguyen to" << endl;
	}
	else
	{
		for (int i = 1; i <= sqrt(N); i++)
		{
			if (N % 2 == 0)
			{
				counter++;
			}			
		}
		if (counter != 0)
		{
			cout << "N khong la so nguyen to" << endl;
		}
		else
		{
			cout << "N la so nguyen to " << endl;
		}
	}
	return 0;
}


