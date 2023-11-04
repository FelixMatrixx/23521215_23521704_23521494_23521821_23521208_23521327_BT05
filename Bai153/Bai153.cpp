#include<iostream>

using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG& d);
int ktCat(DUONGTHANG, DUONGTHANG);
int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap d1: ";
	Nhap(d1);
	cout << "Nhap d2: ";
	Nhap(d2);
	int kt = ktCat(d1, d2);
	if (kt == 1)
		cout << "Cat nhau";
	else
		cout << "Khong cat nhau";
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
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}