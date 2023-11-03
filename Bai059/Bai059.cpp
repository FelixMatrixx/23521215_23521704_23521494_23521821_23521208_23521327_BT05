#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

PHANSO Cong(PHANSO, PHANSO);
void RutGon(PHANSO&);
void Nhap(PHANSO&, PHANSO&);
int UCLN(int, int);

int main()
{
	PHANSO M, N;
	Nhap(M, N);
	cout << "Tong hai phan so la: " << Cong(M, N).Tu << "/" << Cong(M, N).Mau;
	return 1;
}

void Nhap(PHANSO& m, PHANSO& n)
{
	cout << "Nhap phan so M:\nNhap tu: ";
	cin >> m.Tu;
	cout << "Nhap mau: ";
	cin >> m.Mau;
	cout << "Nhap phan so N:\nNhap tu: ";
	cin >> n.Tu;
	cout << "Nhap mau: ";
	cin >> n.Mau;
}

PHANSO Cong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}