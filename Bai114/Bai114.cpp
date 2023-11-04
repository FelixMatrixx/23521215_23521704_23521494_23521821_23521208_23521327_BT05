#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct DonThuc
{
	float a;
	int n;
	
};
typedef struct DonThuc DONTHUC;
void Nhap(DONTHUC&);
DONTHUC DaoHam(DONTHUC);
void Xuat(DONTHUC);
int main()
{
	DONTHUC f;
	Nhap(f);
	DONTHUC g = DaoHam(f);
	Xuat(g);

	

	return 0;
}
void Nhap(DONTHUC& f)
{
	cout << "Nhap a";
	cin >> f.a;
	cout << "Nhap n ";
	cin >> f.n;
}
DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC g;
	if (f.n  == 0 or f.a == 0)
		g = { 0,0 };
	g.a = f.a * f.n;
	g.n = f.n - 1;
	return g;
}
void Xuat(DONTHUC f)
{
	cout << "Dao ham cap 1 cua f la " <<f.a << "x^" << f.n;
}