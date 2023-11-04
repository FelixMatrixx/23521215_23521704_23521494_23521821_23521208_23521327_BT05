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
int SoNgayToiDaTrongThang(NGAY); // tra ve 28 , 29 , 30 hoac 31 ngay
int SoNgayToiDaTrongNam(NGAY); // tra ve 365 hoac 366
int STTNgayTrongNam(NGAY); // gia su ngay 2/1/2000 se co so tt la 2
int STTNgay(NGAY);
NGAY TimNgay(int, int); // tim ngay thang nam trong nam do  dua vao stt 
NGAY TimNgay(int); // tim ngay tinh tu 01/01/01
NGAY Ngaytruocdo(NGAY ,int);
void Xuat(NGAY);
int main()
{
	NGAY X;
	cout << "Nhap ngay thang nam ";
	Nhap(X);
	cout << "Nhap so k lan ngay truoc do ";
	int k;
	cin >> k;
	
	cout << "Ngay truoc do la ";
	Xuat(Ngaytruocdo(X,k));
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
int SoNgayToiDaTrongNam(NGAY x)
{
	if (NamNhuan(x))
		return 366;
	return 365;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int NgayMax; // bien de chua gia tri ngay toi da trong thang 
	switch (x.thang)
	{
	case 1: case 3: case 5: case 7:case 8: case 10:case 11:case 12:
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
int STTNgayTrongNam(Ngay x)
{
	int Stt = 0;
	for (int i = 1; i < x.thang; i++)
	{
		NGAY temp = { 1,i,x.nam };
		Stt = Stt + SoNgayToiDaTrongThang(temp);
	}
	return Stt + x.ngay;
}
int STTNgay(NGAY x)
{
	int Stt = 0;
	for (int i = 1; i < x.nam; i++)
	{
		NGAY temp = {1, 1, i};
		if (NamNhuan(temp))
			Stt += 366;
		else
			Stt += 365;
	}
	return Stt + STTNgayTrongNam( x);
}
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1, nam };
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.thang = temp.thang + 1;
	}
	temp.ngay = stt;
	return temp;
}
NGAY TimNgay(int stt)
{
	NGAY temp = { 1,1,1 };
	while (stt -  SoNgayToiDaTrongNam(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongNam(temp);
		temp.nam++;
	}
	temp = TimNgay(temp.nam , stt);
	return temp;
}
NGAY Ngaytruocdo(NGAY x ,int k)
{
	if (x.ngay == 1 and x.thang == 1 and x.nam == 1)
		return x;
	NGAY temp = x;
	int stt = STTNgay(x) - k;
	return TimNgay(stt);


}
void Xuat(NGAY x)
{
	cout << "\n Ngay ";
	cout << x.ngay;
	cout << "\n Thang ";
	cout << x.thang;
	cout << "\n Nam ";
	cout << x.nam;
	
}