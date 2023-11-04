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
float KhoangcachX(DIEM, DIEM);
int main()
{
	DIEM A, B;
	cout << "Nhap toa do A " <<endl;
	Nhap(A);
	cout << "Nhap toa do B " <<endl;
	Nhap(B);
	cout << "Khoang cach hai diem tren phuong OX ";
	cout << KhoangcachX(A, B);

}
void Nhap(DIEM& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
}
float KhoangcachX(DIEM P, DIEM Q)
{
	return abs(P.x - Q.x);
}