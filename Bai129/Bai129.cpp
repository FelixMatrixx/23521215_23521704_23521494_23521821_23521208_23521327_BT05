#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float r;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEM&);
void Nhap(HINHCAU&);
int main()
{
	HINHCAU c;
	Nhap(c);
	return 0;
}
void Nhap(DIEM& I)
{
	cout << "Nhap hoanh do: ";
	cin >> I.x;
	cout << "Nhap tung do: ";
	cin >> I.y;
}
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}