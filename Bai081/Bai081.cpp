#include<iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void QuiDongTu(HONSO&, HONSO&);
void Xuat(HONSO);
int main()
{
	HONSO x, y;
	Nhap(x);
	Nhap(y);
	QuiDongTu(x, y);
	Xuat(x);
	Xuat(y);
	return 0;
}
void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}
void Xuat(HONSO x)
{
	cout << "\nPhan nguyen: " << x.Nguyen;
	cout << "\nPhan tu: " << x.Tu;
	cout << "\nPhan mau: " << x.Mau;
}