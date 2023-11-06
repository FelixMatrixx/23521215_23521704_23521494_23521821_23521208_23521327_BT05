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

int ktAm(PHANSO);

int main()
{
	PHANSO p1;
	cout << "\nNhap phan so 1:";
	Nhap(p1);
	Xuat(p1);
	if (ktAm(p1) == 1)
		cout << "\nPhan so am";
	else
		cout << "\nPhan so duong";
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

int ktAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return 1;
	return 0;
}