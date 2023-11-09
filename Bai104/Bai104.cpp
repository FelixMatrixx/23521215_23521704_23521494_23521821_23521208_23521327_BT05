#include<iostream>
#include <string>
using namespace std;
struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef Ngay NGAY;
void Nhap(NGAY&);
void Xuat(NGAY);
bool ktNamNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);
int main()
{
	int stt;
	cout << "Nhap stt: ";
	cin >> stt;
	cout << "Ngay can tim la: ";
	Xuat(TimNgay(stt));
	return 0;
}
void Nhap(NGAY& x)
{
	cin >> x.Ngay;
	cin >> x.Thang;
	cin >> x.Nam;
}
void Xuat(NGAY x)
{
	cout << x.Ngay << ":" << x.Thang << ":" << x.Nam;
}
bool ktNamNhuan(NGAY x)
{
	if ((x.Nam % 4 == 0 && x.Nam % 100 != 0) || x.Nam % 400 == 0)
		return true;
	return false;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNamNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNamNhuan(x))
		return 366;
	return 365;
}
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}
NGAY TimNgay(int stt)
{
	int sn = 365;
	int nam = 1;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}