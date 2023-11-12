#include <iostream>
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
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON [], int &);
void Xuat(DUONGTRON [], int);

float KhoangCachOx(DUONGTRON );
DUONGTRON GanOxNhat(DUONGTRON[], int);

int main()
{
	DUONGTRON a[50];
	int n;
	Nhap(a, n);
	Xuat(GanOxNhat(a, n));
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
	cout << "(" << P.x << "," << P.y << ")";
}
void Nhap(DUONGTRON& C)
{
	cout << "Nhap tam I:\n";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}
void Xuat(DUONGTRON C)
{
	cout << "Tam I: ";
	Xuat(C.I);
	cout << "\nBan kinh R= ";
	cout << C.R;
	cout << endl;
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong tron a[" << i << "]\n";
		Xuat(a[i]);
	}
}
float KhoangCachOx(DUONGTRON C)
{
	if (abs(C.I.y) < C.R)
		return 0;
	float kc = abs(abs(C.I.y) - C.R);
	return kc;
}
DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}