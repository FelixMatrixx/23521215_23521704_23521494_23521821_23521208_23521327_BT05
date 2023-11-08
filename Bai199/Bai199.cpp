#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON[], int&);

float KhoangCach(DIEM, DIEM);
int ktQuaGoc(DUONGTRON);
int ktTonTai(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	Nhap(b, k);
	if (ktTonTai(b, k) == 1)
		cout << "\nTon tai.";
	else
		cout << "\nKhong ton tai.";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}

void Nhap(DUONGTRON& c1)
{
	cout << "\nNhap Diem: \n";
	Nhap(c1.I);
	cout << "\nNhap ban kinh: ";
	cin >> c1.R;
}

void Xuat(DUONGTRON c1)
{
	cout << "\nTam duong tron: ";
	Xuat(c1.I);
	cout << "\nBan kinh duong tron: " << c1.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int ktQuaGoc(DUONGTRON c)
{
	DIEM O = { 0,0 };
	float kc = KhoangCach(c.I, O);
	if (kc == c.R)
		return 1;
	return 0;
}

int ktTonTai(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]))
			return 1;
	return 0;
}