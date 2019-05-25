//tim uoc chung lon nhat cua 2 so a va b

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b;
	int tich;
	cout << "Nhap vao so a: " << endl;
	cin >> a;
	cout << "Nhap vao so b: " << endl;
	cin >> b;
	tich = a * b;
	for (int i = max(a,b); i <= tich; i++)
	{
		if ((i % a == 0) and (i % b == 0))
		{
			cout << "Boi chung nho nhat la " << i << endl;
		}
	}	
	return 0;
}

