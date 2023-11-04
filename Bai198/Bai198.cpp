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
struct DuongTron
{
	DIEM I;
	float R;
};
typedef DuongTron DUONGTRON;
void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void NhapMang(DUONGTRON [], int&);
float KcGoc(DIEM);
DUONGTRON GanNhat(DUONGTRON [], int);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON c[100];
	int n;
	NhapMang(c,n);
	DUONGTRON Min = GanNhat(c, n);
	cout << "Duong tron gan goc toa do nhat la " << endl;
	Xuat(Min);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap toa do x ";
	cin >> P.x;
	cout << "Nhap toa do y ";
	cin >> P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap toa do tam I " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh R ";
	cin >> c.R;
}
void NhapMang(DUONGTRON c[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron c[" << i << "] " << endl;
		Nhap(c[i]);
	}
}
float KcGoc(DIEM a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}
DUONGTRON GanNhat(DUONGTRON c[], int n)
{
	DUONGTRON lc = c[0];
	for (int i = 0; i < n; i++)
		if (KcGoc(c[i].I) < KcGoc(lc.I))
			lc = c[i];
	return lc;
}
void Xuat(DUONGTRON c)
{
	cout << "Duong tron tam I co toa do la (" << c.I.x << "," << c.I.y << ") " << endl;
	cout << "Ban kinh duong tron la " << c.R;
}