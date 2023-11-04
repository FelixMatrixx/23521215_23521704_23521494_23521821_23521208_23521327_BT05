#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Phanso
{
	int tu;
	int mau;
};
typedef struct Phanso PHANSO;
void Nhap(PHANSO&);
void Rutgon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
void Xuat(PHANSO);
int main()
{
	PHANSO a, b;
	cout << "Nhap phan so 1 " <<endl;
	Nhap(a);
	cout << "Nhap phan so 2 "<<endl;
	Nhap(b);
	PHANSO kq = Tong(a, b);
	cout << "Tong la ";
	Xuat(kq);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu ";
	cin >> x.tu;
	cout << "Nhap mau ";
	cin >> x.mau;
}
PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.tu = x.tu * y.mau + y.tu * x.mau;
	temp.mau = x.mau * y.mau;
	Rutgon(temp);
	return temp;
}
void Rutgon(PHANSO& x)
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
	x.tu = x.tu / (a + b);
	x.mau = x.mau / (a + b);

}
void Xuat(PHANSO x)
{
	cout << "\n Tu la ";
	cout << x.tu;
	cout << "\n Mau la ";
	cout << x.mau;
	
}