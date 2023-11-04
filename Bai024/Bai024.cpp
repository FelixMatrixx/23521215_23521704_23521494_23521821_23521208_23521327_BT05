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
void Nhap(DIEM&);
DIEM DoiXungPhanGiac1(DIEM);
void Xuat(DIEM);
int main()
{
	DIEM A;
	cout << "Nhap toa do diem 1 " <<endl;
	Nhap(A);
	DIEM doixung = DoiXungPhanGiac1(A);
	cout << "Toa do diem doi xung qua phan giac 1 ";
	Xuat(doixung);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
}
DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}
void Xuat(DIEM P)
{
	cout << "\n x la ";
	cout << P.x;
	cout << "\n y la ";
	cout << P.y;
}