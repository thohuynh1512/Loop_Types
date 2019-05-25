//Tính kết quả của phép toán 1+1/23+1/33+...+1/n3 (làm tròn 3 chữ số thập phân)

#include <iostream>
using namespace std;

int main() {
	int n;
	float tongtam = 1, tong = 0;
	cout << "Nhap so n = ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		tong += 1 / pow(i, 3);
	}
	cout.precision(4); //lam trong 3 chu so thap phan
	cout << "Ket qua cua phep toan = " << tong << endl;
	return 0;
}