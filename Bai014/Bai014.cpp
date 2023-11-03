#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
	float z;
};
typedef diem DIEM;
void Nhap(DIEM& P);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
int main()
{
	DIEM A, B;
	cout << "Nhap toa do diem 1:\n";
	Nhap(A);
	cout << "Nhap toa do diem 2:\n";
	Nhap(B);
	cout << "Toa do diem 1: ";
	Xuat(A);
	cout << "\nToa do diem 2: ";
	Xuat(B);
	cout << "\nKhoang cach hai diem theo phuong Ox la: ";
	cout << KhoangCach(A, B);
	return 0;

}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y<<","<<P.z << ")";
}
float KhoangCach(DIEM P, DIEM Q)
{
	float kc = abs(P.x - P.y);
	return kc;
}
//lam lon bai 18