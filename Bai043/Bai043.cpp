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

bool ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);

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

	if (ktTrung(A, B))
		cout << "\n2 diem trung nhau";
	else
		cout << "\n2 diem khong trung nhau";
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

bool ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if (P.x == Q.x && P.y == Q.y && P.z == Q.z)
		return 1;
	return 0;
}