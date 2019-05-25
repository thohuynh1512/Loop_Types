//tim uoc chung lon nhat cua 2 so a va b

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap vao so a: " << endl;
	cin >> a;
	cout << "Nhap vao so b: " << endl;
	cin >> b;
	while (a!=b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	cout << "Uoc chung lon nhat la " << a << endl;
	return 0;
}

