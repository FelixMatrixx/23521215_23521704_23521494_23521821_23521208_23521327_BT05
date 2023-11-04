#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;

};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG [], int& );
bool Ktra(DUONGTHANG, DUONGTHANG);
bool KTraTrung(DUONGTHANG[], int );


int main()
{

	DUONGTHANG d[100];
	int n;
	Nhap(d, n);
	if (KTraTrung(d, n))
		cout << "Ton tai 2 duong thang trung nhau ";
	else
		cout << "Khong ton tai 2 duong thang trung nhau ";
	
	return 0;
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
void Nhap(DUONGTHANG d[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang d" << i << ": " << endl;
		Nhap(d[i]);
	}
}
bool Ktra(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((float)d1.a / d2.a == (float)d1.b / d2.b and(float)d1.b/d2.b == (float)d1.c / d2.c)
		return true;
	return false;
}
bool KTraTrung(DUONGTHANG d[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i+1 ; j <= n-1 ; j++)
			if(Ktra(d[i], d[j]))
				return true;
	}
	return false;
}
