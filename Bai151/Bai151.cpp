#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct DuongThang
{
	int a;
	int b;
	int c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int ktTrung(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1;
	cout << "Nhap duong thang d1: ";
	Nhap(d1);
	Xuat(d1);
	DUONGTHANG d2;
	cout << "Nhap duong thang d2: ";
	Nhap(d2);
	Xuat(d2);

	if (ktTrung(d1, d2) == 1)
		cout << "\n2 duong thang trung nhau.";
	else
		cout << "\n2 duong thang khong trung nhau.";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\n" << d.a << ".x + " << d.b << ".y + " << d.c << " = 0";
}

int ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = (float)d1.a * d2.b - d2.a * d1.b;
	float Dx = (float)-d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return 1;
	return 0;
}