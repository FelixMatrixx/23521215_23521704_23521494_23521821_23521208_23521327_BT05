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
struct DuongTron
{
	DIEM I;
	float R;
};
typedef DuongTron DUONGTRON;
void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON I;
	Nhap(I);
	Xuat(I);
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap toa do x ";
	cin >> P.x;
	cout << "Nhap toa do y ";
	cin >> P.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap toa do tam I " <<endl;
	Nhap(c.I);
	cout << "Nhap ban kinh R ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "Duong tron tam I co toa do la (" << c.I.x << "," << c.I.y << ") " << endl;
	cout << "Ban kinh duong tron la " << c.R;
}