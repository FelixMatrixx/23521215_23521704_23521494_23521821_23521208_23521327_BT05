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
int Sosanhthoigian(THOIGIAN, THOIGIAN);
int main()
{
	THOIGIAN A, B;
	cout << "Nhap moc thoi gian 1 ";
	Nhap(A);
	cout << "Nhap moc thoi gian 2 ";
	Nhap(B);
	cout << Sosanhthoigian(A, B);
	return 0;
}
void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio ";
	cin >> x.gio;
	cout << "\nNhap phut ";
	cin >> x.phut;
	cout << "\nNhap giay ";
	cin >> x.giay;
}

int Sosanhthoigian(THOIGIAN x, THOIGIAN y)
{
	
		if (x.gio > y.gio)
			return 1;
		if (x.gio < y.gio)
			return -1;
		if (x.phut > y.phut)
			return 1;
		if (x.phut < y.phut)
			return -1;
		if (x.giay > y.giay)
			return 1;
		if (x.giay < y.giay)
			return -1;
		return 0;
	

}