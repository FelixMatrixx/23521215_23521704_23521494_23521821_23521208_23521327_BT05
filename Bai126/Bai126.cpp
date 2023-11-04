#include <iostream>
#include <iomanip>
#include <string>
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
typedef DuongTron DUONGTRON;
struct DuongThang
{
	float a;
	float b;
	float c;

};
typedef  struct DuongThang  DUONGTHANG;
void Nhap(DUONGTHANG&);
void Nhap(DIEM&);
void Nhap(DUONGTRON&);
int XetTuongDoi(DUONGTRON, DUONGTHANG);
int main()
{
	DUONGTHANG y;
	DUONGTRON I;
	Nhap(y);
	Nhap(I);
	cout << XetTuongDoi(I, y);

		return 0;
}
void Nhap(DUONGTHANG& y)
{
	cout << "Nhap he so a ";
	cin >> y.a;
	cout << "Nhap he so b ";
	cin >> y.b;
	cout << "Nhap he so c ";
	cin >> y.c;

}
void Nhap(DIEM& P)
{
	cout << "Nhap toa do x ";
	cin >> P.x;
	cout << "Nhap toa do y ";
	cin >> P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap toa do tam I " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh R ";
	cin >> c.R;
}

int XetTuongDoi(DUONGTRON c, DUONGTHANG y)
{
	float kc = abs(y.a * c.I.x + y.b * c.I.y + y.c) / sqrt(y.a * y.a + y.b * y.b);
	if (c.R > kc)
		return 2;
	if (c.R == kc)
		return 1;
	if (c.R < kc)
		return 0;
}