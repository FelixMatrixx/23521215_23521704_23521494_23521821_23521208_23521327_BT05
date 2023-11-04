#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
DIEM DoiXungOyz(DIEM);
void Xuat(DIEM);
int main()
{
	DIEM A;
	cout << "Nhap toa do diem 1 " << endl;
	Nhap(A);
	DIEM doixung = DoiXungOyz(A);
	cout << "Toa do diem doi xung Oyz ";
	Xuat(doixung);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
	cout << "Nhap z ";
	cin >> P.z;
}
DIEM DoiXungOyz(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}
void Xuat(DIEM P)
{
	cout << "\n x la ";
	cout << P.x;
	cout << "\n y la ";
	cout << P.y;
	cout << "\n z la ";
	cout << P.z;
}