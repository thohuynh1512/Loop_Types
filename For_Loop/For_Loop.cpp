/*
Viết chương trình C++ để nhập một câu, đếm số từ và ký tự trong câu đó, và in kết quả ra màn hình.*/
#include <iostream>
using namespace std;

int main()
{
	int n, kq = 1;
	cout << "Nhap so can tinh giai thua: ";
	cin >> n;
	for (int i = 1; i <= n ; i++)
	{
		kq *= i;
	}
	cout << "Giai thua cua " << n << "bang " << kq;
	return 0;
}


