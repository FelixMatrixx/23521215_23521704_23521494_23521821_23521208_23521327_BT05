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
struct TamGiac
{
	DIEM a;
	DIEM b;
	DIEM c;

};
typedef struct TamGiac TAMGIAC;
void Nhap(DIEM&);
void Nhap(TAMGIAC&);
float Kc(DIEM, DIEM);
float TongKc(DIEM , TAMGIAC);
int main()
{
	TAMGIAC t;
	Nhap(t);
	DIEM P;
	cout << "Nhap toa do diem P " <<endl;
	Nhap(P);
	cout << "Tong khoang cach la " << TongKc(P, t);
	return 0;
}
void Nhap(DIEM& t)
{
	cout << "Nhap x ";
	cin >> t.x;
	cout << "Nhap y ";
	cin >> t.y;
}
void Nhap(TAMGIAC& t)
{
	cout << "Nhap toa do a " << endl;
	Nhap(t.a);
	cout << "Nhap toa do  b " << endl;
	Nhap(t.b);
	cout << "Nhap toa do c " << endl;
	Nhap(t.c);
}
float Kc(DIEM  a, DIEM b )
{
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
float TongKc(DIEM P ,TAMGIAC t)
{
	return Kc(P, t.a) + Kc(P, t.b) + Kc(P, t.c);
}