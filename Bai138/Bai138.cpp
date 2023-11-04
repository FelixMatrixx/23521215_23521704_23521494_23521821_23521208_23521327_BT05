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
float Kc(DIEM , DIEM); // tinh do dai 1 canh
bool KTraTamGiac(TAMGIAC);

int main()
{
	TAMGIAC t;
	Nhap(t);
	if (KTraTamGiac(t))
		cout << "La tam giac ";
	else
		cout << "Khong la tam giac ";
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
	cout << "Nhap toa do  b " <<endl;
	Nhap(t.b);
	cout << "Nhap toa do c " <<endl;
	Nhap(t.c);
}
float Kc(DIEM  a, DIEM b)
{
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
bool KTraTamGiac(TAMGIAC t)
{
	float a = Kc(t.a, t.b);
	float b = Kc(t.b, t.c);
	float c = Kc(t.a, t.c);
	if (a + b > c and b + c > a and a + c > b)
		return true;
	return false;
}