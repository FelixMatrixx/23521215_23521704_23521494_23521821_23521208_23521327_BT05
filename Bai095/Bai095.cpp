#include <iostream>

using namespace std;

struct Ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);

int main()
{
	NGAY D;
	Nhap(D);
	cout << "So ngay toi da trong thang: " << SoNgayToiDaTrongThang(D);
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}
int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}