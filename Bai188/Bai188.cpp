#include <iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

int ktDuong(PHANSO);

int SoSanh(PHANSO, PHANSO);
PHANSO TimNhoNhat(PHANSO[], int);


PHANSO TimDuongDau(PHANSO[], int);
PHANSO DuongNhoNhat(PHANSO[], int);


int main()
{
	PHANSO a[50];
	int n;
	Nhap(a, n);
	Xuat(DuongNhoNhat(a, n));
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);

}
int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}
int SoSanh(PHANSO x, PHANSO P)
{
	float ts1 = (float)x.Tu / x.Mau;
	float ts2 = (float)P.Tu / P.Mau;
	if (ts1 < ts2)
		return -1;
	if (ts1 == ts2)
		return 0;
	if (ts1 > ts2)
		return 1;

}
PHANSO  TimNhoNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == -1)
			lc = a[i];
	return lc;
}
PHANSO TimDuongDau(PHANSO a[], int n)
{
	PHANSO kq = { 0,1 };
	for (int i = 0; i < n; i++)
		if (ktDuong(a[i]))
			return a[i];
	return kq;
}
PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO kq = { -1,1 };
		return kq;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == -1)
		lc = a[n - 1];
	return lc;

}

//done