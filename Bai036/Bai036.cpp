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
float KhoangcachY(DIEM, DIEM);
int main()
{
	DIEM A, B;
	cout << "Nhap toa do A " << endl;
	Nhap(A);
	cout << "Nhap toa do B " << endl;
	Nhap(B);
	cout << "Khoang cach hai diem tren phuong Oy ";
	cout << KhoangcachY(A, B);

}
void Nhap(DIEM& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
	cout << "Nhap y ";
	cin >> P.z;
}
float KhoangcachY(DIEM P, DIEM Q)
{
	return abs(P.y - Q.y);
}