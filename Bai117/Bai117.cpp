#include<iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
DONTHUC operator*(DONTHUC, DONTHUC);
void Xuat(DONTHUC);
int main()
{
	DONTHUC f, g;
	Nhap(f);
	Nhap(g);
	Xuat(f*g);
	return 0;
}
void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
DONTHUC operator*(DONTHUC f, DONTHUC g)
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