#include <iostream>
#include <cmath>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO h1;
	Nhap(h1);
	Xuat(h1);
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")";
}
