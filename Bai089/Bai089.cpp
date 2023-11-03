#include <iostream>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&, THOIGIAN&);
int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN T1,T2;
	Nhap(T1, T2);
	cout << "Khoang cach (tinh theo giay) cua 2 khoang thoi gian trong ngay: " << KhoangCach(T1, T2);
	return 1;
}
void Nhap(THOIGIAN& x, THOIGIAN& y)
{
	cout << "Thoi gian thu nhat\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
	cout << "Thoi gian thu hai\nNhap gio: ";
	cin >> y.Gio;
	cout << "Nhap phut: ";
	cin >> y.Phut;
	cout << "Nhap giay: ";
	cin >> y.Giay;
}
int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}
int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}