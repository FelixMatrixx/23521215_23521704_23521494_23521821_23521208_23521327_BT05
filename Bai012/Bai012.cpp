#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Duongthang
{
	float a;
	float b;
	float c;
};
typedef struct Duongthang DUONGTHANG;
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int main()
{
	DUONGTHANG d;
	Nhap(d);
	Xuat(d);

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
void Xuat(DUONGTHANG d)
{
	cout << setw(6);
	cout << fixed << setprecision(3);
	cout << "\n a = " << d.a;
	cout << "\n b = " << d.b;
	cout << "\n c = " << d.c;
}