#include <iostream>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO operator/(PHANSO, PHANSO);
void RutGon(PHANSO &);
int UCLN(int, int);
int main()
{
	PHANSO A, B;
	cout << "Nhap phan so thu nhat\n";
	Nhap(A);
	cout << "Nhap phan so thu hai\n";
	Nhap(B);
	cout << "Phan so thu nhat: ";
	Xuat(A);
	cout << "\nPhan so thu hai: ";
	Xuat(B);
	cout << "\nThuong hai phan so: ";
	Xuat(A / B);
	return 0;
}
void Nhap(PHANSO& P)
{
	cout << "Nhap tu: ";
	cin >> P.tu;
	cout << "Nhap mau: ";
	cin >> P.mau;
}
void Xuat(PHANSO P)
{
	cout << P.tu << "/" << P.mau;
}
PHANSO operator/(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau;
	temp.mau = x.mau * y.tu;
	RutGon(temp);
	return temp;
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
void RutGon(PHANSO &x)
{
	int kq = UCLN(x.tu, x.mau);
	x.tu = x.tu / kq;
	x.mau = x.mau / kq;
}