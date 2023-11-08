#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);

int ktDuong(PHANSO);

void LietKe(PHANSO[], int);

int main()
{
	PHANSO p[100];
	int k;
	Nhap(p, k);
	LietKe(p, k);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}

void LietKe(PHANSO a[], int n)
{
	cout << "\nCac gia tri duong trong mang: ";
	for (int i = 0; i < n; i++)
		if (ktDuong(a[i]))
			Xuat(a[i]);
}