#include<iostream>
#include<cmath>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Nhap(DIEM[][20], int&, int&);
void Nhap(DUONGTHANG&);
float KhoangCach(DIEM, DUONGTHANG);
DIEM TimDiem(DIEM[][20], DUONGTHANG, int, int);
void Xuat(DIEM);
int main()
{
	DIEM a[20][20];
	int m, n;
	Nhap(a, m, n);
	DUONGTHANG d;
	Nhap(d);
	DIEM P = TimDiem(a, d, m, n);
	cout << "Diem gan d nhat la: ";
	Xuat(P);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "Nhap tung do: ";
	cin >> a.x;
	cout << "Nhap hoanh do: ";
	cin >> a.y;
}
void Nhap(DIEM a[][20], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
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
float KhoangCach(DIEM a, DUONGTHANG d)
{
	return abs(d.a * a.x + d.b * a.y + d.c) / sqrt(d.a * d.a + d.b * d.b + d.c * d.c);
}
DIEM TimDiem(DIEM a[][20],DUONGTHANG d, int m, int n)
{
	DIEM lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (KhoangCach(lc, d) > KhoangCach(a[i][j], d))
				lc = a[i][j];
		}
	return lc;
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << "," << a.y << ")";
}
