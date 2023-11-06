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

int ucln(int, int);
PHANSO RutGon(PHANSO);

PHANSO operator-(PHANSO, PHANSO);

int main()
{
	PHANSO p1;
	cout << "\nNhap phan so 1:";
	Nhap(p1);
	Xuat(p1);
	PHANSO p2;
	cout << "\nNhap phan so 2:";
	Nhap(p2);
	Xuat(p2);
	
	PHANSO kq = p1 - p2;
	cout << "\nKet qua: ";
	Xuat(kq);

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

int ucln(int m, int n)
{
	int a = abs(m);
	int b = abs(n);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

PHANSO RutGon(PHANSO x)
{
	int kq = ucln(x.Tu, x.Mau);
	PHANSO temp;
	temp.Tu = x.Tu / kq;
	temp.Mau = x.Mau / kq;
	return temp;
}

PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - x.Mau * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp = RutGon(temp);
	return temp;
}