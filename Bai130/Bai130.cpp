#include <iostream>
#include <iomanip>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Xuat(HINHCAU);
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc;
	Nhap(M);
	Nhap(hc);
	Xuat(hc);
	return 0;
}

void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam I:";
	Nhap(c.I);
	cout << "Nhap R:";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap y: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\ny = " << P.z;
}