#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Honso
{
	int tu;
	int mau;
	int nguyen;
};
typedef struct Honso HONSO;
void Nhap(HONSO&);
void Rutgon(HONSO&);
HONSO Thuong(HONSO, HONSO);
void Xuat(HONSO);
int main()
{
	HONSO A, B;
	cout << "Nhap hon so 1 " << endl;
	Nhap(A);
	cout << "Nhap honso 2 " << endl;
	Nhap(B);
	HONSO kq = Thuong(A, B);
	cout << "Thuong cua 2 hon so la ";
	Xuat(kq);

	return 0;
}
void Nhap(HONSO& x)
{
	cout << "Nhap tu ";
	cin >> x.tu;
	cout << "Nhap mau ";
	cin >> x.mau;
	cout << "Nhap nguyen ";
	cin >> x.nguyen;
}
void Rutgon(HONSO& x)
{
	int a = abs(x.tu);
	int b = abs(x.mau);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	// a+ b chinh la uoc chung lon nhat cua tu va mau
	x.tu = x.tu / (a + b); // rut gon tu
	x.mau = x.mau / (a + b); //rut gon mau
	x.nguyen = x.nguyen + x.tu / x.mau; // phan nguyen moi se bang phan nguyen cu + phan nguyen cua (a/b)
	x.tu = x.tu % x.mau;
	 
}
HONSO Thuong(HONSO x, HONSO y)
{
	x.tu = x.nguyen * x.mau + x.tu;
	x.nguyen = 0;
	y.tu = y.nguyen * y.mau + y.tu;
	y.nguyen = 0;
	HONSO temp;
	temp.tu = x.tu * y.mau;
	temp.mau = x.mau * y.tu;
	temp.nguyen = 0;
	Rutgon(temp);
	return temp;
}
void Xuat(HONSO x)
{
	cout << "\n Tu la ";
	cout << x.tu;
	cout << "\n Mau la ";
	cout << x.mau;
	cout << "\n Nguyen la ";
	cout << x.nguyen;
}