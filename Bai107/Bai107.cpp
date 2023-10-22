#include <iostream>

using namespace std;

struct Ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&, int&);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
NGAY KeTiep(NGAY, int);
NGAY TimNgay(int);
NGAY TimNgay(int, int);

int main()
{
	NGAY D;
	int k;
	Nhap(D, k);
	cout << "Ngay tiep theo: ";
	cout << KeTiep(D, k).ng << "/" << KeTiep(D, k).th << "/" << KeTiep(D, k).nm;
	return 1;
}

void Nhap(NGAY& x, int& k)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
	cout << "Nhap so ngay tiep theo: ";
	cin >> k;
}
int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.nm - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = { 1,i,x.nm };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ng);
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
NGAY KeTiep(NGAY x, int k)
{
	int stt = SoThuTu(x);
	stt = stt + k;
	return TimNgay(stt);
}
NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}