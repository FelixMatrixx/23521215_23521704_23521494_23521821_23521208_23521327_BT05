#include<iostream>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTu(NGAY);
NGAY TimNgay(int);
NGAY KeTiep(NGAY);
void Xuat(NGAY);
int main()
{
	NGAY x;
	Nhap(x);
	NGAY kt = KeTiep(x);
	Xuat(kt);
	return 0;
}
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}
bool ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaytoida[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaytoida[1] = 29;
	return ngaytoida[x.Thang - 1];
}
int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.Nam; i++)
	{
		NGAY temp = { 1, 1, i };
		stt += SoNgayToiDaTrongNam(temp);
	}
	for (int i = 1; i < x.Thang; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return stt + x.Ngay;
}
NGAY TimNgay(int stt)
{
	NGAY ngay;
	ngay.Nam = 1;
	ngay.Thang = 1;
	int t = stt;
	int sn = 365;
	int st = 31;
	while (t - sn > 0)
	{
		t -= sn;
		ngay.Nam++;
		NGAY temp = { 1,1,ngay.Nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	while (t - st > 0)
	{
		t -= st;
		ngay.Thang++;
		NGAY temp = { 1,ngay.Thang,ngay.Nam };
		st = SoNgayToiDaTrongThang(temp);
	}
	ngay.Ngay = t;
	return ngay;
}
NGAY KeTiep(NGAY x)
{
	NGAY temp;
	int stt = SoThuTu(x);
	temp = TimNgay(stt + 1);
	return temp;
}
void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay;
	cout << "\nThang:" << x.Thang;
	cout << "\nNam: " << x.Nam;
}