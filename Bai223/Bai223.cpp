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

void Nhap(DIEM[][100], int&, int&);

void Nhap(DIEM&);
void Xuat(DIEM);

int ktThuoc(DUONGTHANG, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DIEM b[100][100];
	int k, l;
	DUONGTHANG d1;
	cout << "Nhap duong thang: ";
	Nhap(d1);
	Xuat(d1);
	cout << "\nNhap ma tran: ";
	Nhap(b, k, l);
	cout << "\nSo diem thuoc duong thang: " << DemDiem(b, k, l, d1);
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

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Nhap(a[i][j]);
}

void Xuat(DIEM P)
{
	cout << "\n(" << P.x << ", " << P.y << ")";
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]) == 1)
				++dem;
	return dem;
}