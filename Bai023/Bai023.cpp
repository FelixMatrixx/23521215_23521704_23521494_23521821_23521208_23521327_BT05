#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
DIEM DoiXungTung(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "\nDiem doi xung:\n";
	cout << DoiXungTung(P).x << setw(5) << DoiXungTung(P).y;
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap toa do diem P\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

DIEM DoiXungTung(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}