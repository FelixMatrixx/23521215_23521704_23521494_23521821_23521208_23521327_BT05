#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct Thoigian THOIGIAN;
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int main()
{
	THOIGIAN t;
	Nhap(t);
	Xuat(t);
	return 0;
}
void Nhap(THOIGIAN& t)
{
	cout << "Nhap gio ";
	cin >> t.Gio;
	cout << "Nhap phut ";
	cin >> t.Phut;
	cout << "Nhap giay ";
	cin >> t.Giay;
	
}
void Xuat(THOIGIAN t)
{
	cout << "\nGio " << t.Gio;
	cout << "\nPhut " << t.Phut;
	cout << "\nGiay " << t.Giay;

}