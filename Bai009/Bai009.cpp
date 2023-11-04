#include<iostream>
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
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}
void Xuat(DUONGTRON c)
{
	cout << "Tam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.r;
}