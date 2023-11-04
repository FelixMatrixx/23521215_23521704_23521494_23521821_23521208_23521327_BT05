#include <iostream>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};

typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN a;
	Nhap(a);
	cout << "So thu tu giay ke tu luc 00:00:00 la: " << SoThuTu(a);
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: " << x.Gio;
	cout << "Nhap phut: " << x.Phut;
	cout << "Nhap giay: " << x.Giay;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}