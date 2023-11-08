#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	int a;
	int b;
	int c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);

void Nhap(DIEM&);
void Xuat(DIEM);

int ktThuoc(DUONGTHANG, DIEM);
int ktQuaDiem(DUONGTHANG[], int, DIEM);

#include <iostream>

int main()
{
	DUONGTHANG b[100];
	int k;
	Nhap(b, k);
	DIEM Q;
	cout << "\nNhap Q: ";
	Nhap(Q);
	Xuat(Q);
	if (ktQuaDiem(b, k, Q) == 1)
		cout << "\nTon tai duong thang di qua diem Q";
	else
		cout << "\nKhong ton tai duong thang di qua diem Q";

	return 0;
}

// declaration
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

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\n(" << P.x << ", " << P.y << ")";
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], P) == 1)
			return 1;
	return 0;
}