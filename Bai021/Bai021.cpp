#include<iostream>

using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
DIEM DoiXungGoc(DIEM);
void Xuat(DIEM);
int main()
{
	DIEM P;
	Nhap(P);
	DIEM PP = DoiXungGoc(P);
	cout << "Toa do diem doi xung qua goc toa do: ";
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
DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}
void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}