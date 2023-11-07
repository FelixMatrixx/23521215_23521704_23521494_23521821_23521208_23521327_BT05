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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);


int main()
{
	DUONGTRON C;
	Nhap(C);
	Xuat(C);
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