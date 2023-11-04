#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungHoanh(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	DIEM PP = DoiXungHoanh(P);
	cout << "Toa do diem doi xung qua truc hoanh la: ";
	Xuat(PP);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}


void Xuat(DIEM P)
{
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}
