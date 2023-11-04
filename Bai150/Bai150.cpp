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
struct duongthang
{
	float a;
	float b;
	float c;

};
typedef struct duongthang DUONGTHANG;
void Nhap(DIEM&);
void Nhap(DUONGTHANG&);
float Kc(DIEM, DUONGTHANG);
int main()
{
	DIEM P;
	cout << "Nhap toa do diem P " << endl;
	Nhap(P);
	DUONGTHANG d;
	Nhap(d);
	cout << "Khoang cach P den duong thang d la " << Kc(P, d);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap toa do x ";
	cin >> P.x;
	cout << "Nhap toa do y ";
	cin >> P.y;
}
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a ";
	cin >> d.a;
	cout << "Nhap b ";
	cin >> d.b;
	cout << "Nhap c ";
	cin >> d.c;
}
float Kc(DIEM P, DUONGTHANG d)
{
	return abs(d.a * P.x + d.b * P.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
}