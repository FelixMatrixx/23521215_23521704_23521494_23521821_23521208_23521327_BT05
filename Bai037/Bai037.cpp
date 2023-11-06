#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	cout << "Diem 1: \n";
	DIEMKHONGGIAN A;
	Nhap(A);
	Xuat(A);
	cout << "\nDiem 2: \n";
	DIEMKHONGGIAN B;
	Nhap(B);
	Xuat(B);

	float kq = KhoangCachZ(A, B);
	cout << "\nKet qua: " << kq;
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

float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(P.z - Q.z);
}