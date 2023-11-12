#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

float kcDenDuongThang(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int, DIEM);


int main()
{
	DUONGTHANG a[50];
	DIEM P;
	int n;
	cout << "Nhap diem P:\n";
	Nhap(P);
	Xuat(P);

	Nhap(a, n);
	Xuat(a, n);

	cout << "Khoang cach gan diem P nhat:\n";
	Xuat(GanDiemNhat(a, n,P));
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
	cout << endl;
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
	cout << "a = ";
	cout << d.a << endl;
	cout << "b = ";
	cout << d.b << endl;
	cout << "c = ";
	cout << d.c;
}
void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]\n";
		Xuat(a[i]);
		cout << endl;
	}
}
float kcDenDuongThang(DUONGTHANG d, DIEM P)
{
	float kc = abs(d.a * P.x + d.b * P.y + d.c) / sqrt(d.a * d.a + d.b * d.b);
	return kc;
}
DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (kcDenDuongThang(a[i], P) < kcDenDuongThang(lc, P))
			lc = a[i];
	return lc;
}