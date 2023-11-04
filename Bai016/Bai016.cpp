#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
void Xuat(DIEM);
void Nhap(DIEM&);

int main()
{
	DIEM P;
	Nhap(P);
	Xuat(P);
	return 0;
}

void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
