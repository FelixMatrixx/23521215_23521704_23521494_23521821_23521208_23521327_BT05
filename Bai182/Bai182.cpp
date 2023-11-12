#include <iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO [], int&);
int main()
{
	PHANSO a[50];
	int n;
	Nhap(a, n);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
//done