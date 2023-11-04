#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct Ngay
{
	int ngay;
	int thang;
	int nam;

};
typedef struct Ngay NGAY;
void Nhap(NGAY&);
bool NamNhuan(int);
int SongayMax(NGAY); // tim so ngay toi da trong nam

int main()
{
	NGAY X;
	cout << "Nhap ngay thang nam ";
	Nhap(X);
	cout << "So ngay toi da trong nam la " << SongayMax(X);
	return 0;
}
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay ";
	cin >> x.ngay;
	cout << "Nhap thang ";
	cin >> x.thang;
	cout << "Nhap nam ";
	cin >> x.nam;
}
bool NamNhuan(int n)
{
	if ((n % 400 == 0) or (n % 4 == 0 and n % 100 != 0))
		return true;
	return false;
}
int SongayMax(NGAY x)
{
	int NgayMax; // bien de chua gia tri ngay toi da trong thang 
	if (NamNhuan(x.nam))
		NgayMax = 366;
	else NgayMax = 365;
	return NgayMax;
}