#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;
struct DuongTron
{
	DIEM I;
	float R;
};
typedef DuongTron DUONGTRON;

void Nhap(DIEM&);
float ChuVi(DUONGTRON);
int main()
{
	DUONGTRON C;
	Nhap(C);
	cout << "Chu vi: " << ChuVi(C);
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
	cout << "I(" << P.x << "," << P.y << ")";
}
void Nhap(DUONGTRON& C)
{
	cout << "Nhap tam I: " << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}
float ChuVi(DUONGTRON C)
{
	float CV = 2 * M_PI * C.R;
	return CV;
}