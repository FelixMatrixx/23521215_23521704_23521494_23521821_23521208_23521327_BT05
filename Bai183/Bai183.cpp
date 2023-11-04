#include<iostream>

using namespace std;
struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO&);
void Xuat(PHANSO[], int);
int main()
{
	PHANSO a[20];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO& a)
{
	cout << "Tu: " << a.tu << endl;
	cout << "Mau: " << a.mau << endl;
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so thu " << i + 1 << ": \n";
		Xuat(a[i]);
	}
}