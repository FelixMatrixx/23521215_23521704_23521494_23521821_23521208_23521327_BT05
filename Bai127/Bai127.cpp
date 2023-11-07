#define _USE_MATH_DEFINES
#include <iostream>
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
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	DUONGTRON C1;
	cout << "Nhap duong tron C1: ";
	Nhap(C1);
	Xuat(C1);
	DUONGTRON C2;
	cout << "\nNhap duong tron C2: ";
	Nhap(C2);
	Xuat(C2);
	int kt = TuongDoi(C1, C2);
	switch (kt)
	{
	case 0:
	{
		cout << "\nTrung";
		break;
	}
	case 1:
	{
		cout << "\nNam Ngoai";
		break;
	}
	case 2:
	{
		cout << "\nTiep Xuc Ngoai";
		break;
	}
	case 3:
	{
		cout << "\nCat";
		break;
	}
	case 4:
	{
		cout << "\nTiep Xuc Trong";
		break;
	}
	case 5:
	{
		cout << "\nChua nhau";
		break;
	}
	default:
		return 1;
	}
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c1)
{
	cout << "\nNhap Diem: \n";
	Nhap(c1.I);
	cout << "\nNhap ban kinh: ";
	cin >> c1.R;
}

void Xuat(DUONGTRON c1)
{
	cout << "\nTam duong tron: ";
	Xuat(c1.I);
	cout << "\nBan kinh duong tron: " << c1.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > c1.R + c2.R)
		return 1;
	if (kc == c1.R + c2.R)
		return 2;
	if (kc < c1.R + c2.R && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}