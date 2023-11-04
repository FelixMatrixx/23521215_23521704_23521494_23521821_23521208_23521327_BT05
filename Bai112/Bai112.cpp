#include <iostream>
#include <iomanip>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
DONTHUC Tich(DONTHUC, DONTHUC);
void Xuat(DONTHUC);

int main()
{
	DONTHUC ff;
	DONTHUC gg;
	Nhap(ff);
	Nhap(gg);
	DONTHUC hh = Tich(ff, gg);
	Xuat(hh);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

DONTHUC Tich(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}


