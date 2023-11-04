#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang
{
	float a;
	float b; 
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2);
void Xuat(DIEM);

int main()
{
	DUONGTHANG d1,d2;
	cout << "Nhap duong thang d1: ";
	Nhap(d1);
	cout << "Nhap duong thang d2: ";
	Nhap(d2);
	DIEM X = GiaoDiem(d1, d2);
	Xuat(X);
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}