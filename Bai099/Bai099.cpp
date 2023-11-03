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
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);
int main()
{
	NGAY x;
	Nhap(x);
	int stt = SoThuTuTrongNam(x);
	cout << stt;
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
	if (ktNhuan)
		ngaytoida[1] = 29;
	return ngaytoida[x.Thang - 1];
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.Thang; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}