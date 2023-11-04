#include<iostream>

using namespace std;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG);
void Xuat(DUONGTHANG[], int);
int main()
{
	DUONGTHANG d[20];
	int n;
	Nhap(d, n);
	Xuat(d, n);
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
void Nhap(DUONGTHANG d[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang thu " << i + 1 << ": \n";
		Nhap(d[i]);
	}
}
void Xuat(DUONGTHANG d)
{
	cout << d.a << "x+" << d.b << "y+" << d.c << "=0";
}
void Xuat(DUONGTHANG d[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang thu " << i + 1 << ": ";
		Xuat(d[i]);
		cout << endl;
	}
}