#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Thoigian
{
	int gio;
	int phut;
	int giay;

};
typedef struct Thoigian THOIGIAN;
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int main()
{
	THOIGIAN x;
	Nhap(x);
	Xuat(x);
	return 0;
}
void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio ";
	cin >> x.gio;
	cout << "Nhap phut ";
	cin >> x.phut;
	cout << "Nhap giay ";
	cin >> x.giay;
}
void Xuat(THOIGIAN x)
{
	cout << "\n Gio: ";
	cout << x.gio;
	cout << "\n Phut: ";
	cout << x.phut;
	cout << "\n Giay: ";
	cout << x.giay;
}


