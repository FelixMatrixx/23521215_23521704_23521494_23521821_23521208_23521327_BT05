#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);

int ktThuoc(HINHCAU, DIEMKHONGGIAN);

int main()
{
	HINHCAU C;
	cout << "Nhap hinh cau: ";
	Nhap(C);
	Xuat(C);
	DIEMKHONGGIAN Q;
	cout << "\nNhap diem Q: ";
	Nhap(Q);
	Xuat(Q);
	int kt = ktThuoc(C, Q);
	if (kt == 1)
		cout << "\nQ thuoc duong tron.";
	else 
		cout << "\nQ khong thuoc duong tron.";

	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << "z = ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

void Nhap(HINHCAU& c)
{
	cout << "\nNhap Tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x)
		+ (Q.y - P.y) * (Q.y - P.y)
		+ (Q.z - P.z) * (Q.z - P.z));
}

int ktThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	int kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}