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
bool NamNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int STTtrongnam(NGAY); // tim so thu tu cua ngay do trong nam
int STTNgay(NGAY); // tim so thu tu ke tu ngay ke tu nam 01/1/01
int SongayMaxNam(NGAY); // tim so ngay toi da trong nam
int KhoangCach(NGAY, NGAY); // tinh khoang cach 2 ngay

int main()
{
	NGAY X, Y;
	cout << "Nhap ngay thang nam  thu 1 " ;
	Nhap(X);
	cout << "Nhap ngay thang nam  thu 2 " ;
	Nhap(Y);
	cout << "Khoang cach 2 ngay la " << KhoangCach(X,Y);
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
bool NamNhuan(NGAY x)
{
	if ((x.nam % 400 == 0) or (x.nam % 4 == 0 and x.nam % 100 != 0))
		return true;
	return false;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int NgayMax; // bien de chua gia tri ngay toi da trong thang 
	switch (x.thang)
	{
	case 1: case 3: case 5: case 7:case 8: case 10:case 11: case 12:
		NgayMax = 31;
		break;
	case 2:
		if (NamNhuan(x))
			NgayMax = 29;
		else
			NgayMax = 28;
		break;
	default:
		NgayMax = 30;
		break;
	}
	return NgayMax;
}
int STTtrongnam(NGAY x)
{
	int Stt = 0;
	for (int i = 1; i < x.thang ;i++)
	{
		NGAY temp = { 1 , i ,x.nam };
		Stt += SoNgayToiDaTrongThang(temp);
	}
	Stt += x.ngay;
	return Stt;
}
int SongayMaxNam(NGAY x)
{
	int NgayMax; // bien de chua gia tri ngay toi da trong thang 
	if (NamNhuan(x))
		NgayMax = 366;
	else NgayMax = 365;
	return NgayMax;
}
int STTNgay(NGAY x)
{
	int STT = 0;
	for (int i = 1; i < x.nam; i++)
	{
		NGAY temp = { 1 ,1 , i };
		if (NamNhuan(temp))
			STT += 366;
		else
			STT +=365;
	}
	STT = STT + STTtrongnam(x);
	return STT;
	
}
int KhoangCach(NGAY x, NGAY y)
{
	int khoangcach;
	khoangcach = abs(STTNgay(x) - STTNgay(y));
	return khoangcach;
}