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
void Nhap(NGAY[], int& n);
bool NamNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int STTtrongnam(NGAY); // tim so thu tu cua ngay do trong nam
int STTNgay(NGAY); // tim so thu tu ke tu ngay ke tu nam 01/1/01
int SongayMaxNam(NGAY); // tim so ngay toi da trong nam
int KhoangCach(NGAY, NGAY); // tinh khoang cach 2 ngay
void KhoangCachMin(NGAY[], int ,NGAY& ,NGAY&); // tim khoang cach ngay ngan nhat
int main()
{
	NGAY X, Y;
	NGAY A[100];
	int n;
	
	Nhap(A, n);
	KhoangCachMin(A, n, X, Y);

	cout << "2 ngay gan nhau nhat la ngay " << X.ngay << "/" << X.thang << "/" << X.nam;
	cout << " va " << Y.ngay << "/" << Y.thang << "/" << Y.nam;
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
void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay thu " << i+1 << ":" << endl;
		Nhap(a[i]);
	}
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
	for (int i = 1; i < x.thang; i++)
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
			STT += 365;
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
void KhoangCachMin(NGAY a[], int n ,NGAY&X , NGAY& Y )
{
	int min = KhoangCach(a[0], a[1]);
	X = a[0];
	Y = a[1];
	for(int i = 0 ; i <=n-2 ; i++)
		for (int j = i+1 ; j <= n-1 ; j++)
			if (KhoangCach(a[i], a[j]) < min)
			{
				X = a[i];
				Y = a[j];
				min = KhoangCach(a[i], a[j]);
			}
}