#include <iostream>

using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&, DONTHUC&);
DONTHUC Thuong(DONTHUC, DONTHUC);

int main()
{
	DONTHUC F, G;
	Nhap(F, G);
	cout << "Thuong don thuc: " << Thuong(F, G).a << "x^" << Thuong(F, G).n;
	return 0;
}

void Nhap(DONTHUC& f, DONTHUC& g)
{
	cout << "Nhap don thuc F\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
	cout << "Nhap don thuc G\nNhap he so: ";
	cin >> g.a;
	cout << "Nhap so mu: ";
	cin >> g.n;
}
DONTHUC Thuong(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}