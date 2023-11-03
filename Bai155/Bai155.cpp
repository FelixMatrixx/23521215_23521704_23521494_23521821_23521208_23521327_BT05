#include <iostream>

using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&, DUONGTHANG&);
int ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG D1, D2;
	Nhap(D1, D2);
	if (ktVuongGoc(D1, D2))
		cout << "Vuong goc!";
	else
		cout << "Khong vuong goc!";
	return 0;
}

void Nhap(DUONGTHANG& d1, DUONGTHANG& d2)
{
	cout << "Nhap duong thang d1\nNhap a: ";
	cin >> d1.a;
	cout << "Nhap b: ";
	cin >> d1.b;
	cout << "Nhap c: ";
	cin >> d1.c;
	cout << "Nhap duong thang d2\nNhap a: ";
	cin >> d2.a;
	cout << "Nhap b: ";
	cin >> d2.b;
	cout << "Nhap c: ";
	cin >> d2.c;
}
int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}