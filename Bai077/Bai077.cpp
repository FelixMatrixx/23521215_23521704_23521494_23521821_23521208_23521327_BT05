#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&, HONSO&);
HONSO Tich(HONSO, HONSO);
void RutGon(HONSO&);
int UCLN(int, int);

int main()
{
	HONSO M, N;
	Nhap(M, N);
	cout << "\nTich hai hon so vua nhap: " << Tich(M, N).Tu << "/" << Tich(M, N).Mau;
	return 1;
}

void Nhap(HONSO& x, HONSO& y)
{
	cout << "Nhap hon so thu nhat\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
	cout << "Nhap hon so thu hai\nNhap nguyen: ";
	cin >> y.Nguyen;
	cout << "Nhap tu: ";
	cin >> y.Tu;
	cout << "Nhap mau: ";
	cin >> y.Mau;
}

HONSO Tich(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}
void RutGon(HONSO& x)
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