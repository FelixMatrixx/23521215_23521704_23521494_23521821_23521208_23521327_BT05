#include<iostream>
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
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
float DienTich(DUONGTRON);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON c;
	Nhap(c);
	float s = DienTich(c);
	cout << s;
	return 0;
}
void Nhap(DIEM& I)
{
	cout << "\nNhap tung do: ";
	cin >> I.x;
	cout << "Nhap hoanh do: ";
	cin >> I.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam duong tron: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}
float DienTich(DUONGTRON c)
{
	return float(3.14 * c.r * c.r);
}

