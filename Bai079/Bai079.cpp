#include <iostream>
#include <cmath>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int ucln(int, int);
int ktToiGian(HONSO);

int main()
{
	HONSO h1;
	Nhap(h1);
	Xuat(h1);
	if (ktToiGian(h1) == 1)
		cout << "\nHon so toi gian";
	else
		cout << "\nHon so khong toi gian";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << x.Nguyen << "(" << x.Tu << "/" << x.Mau << ")";
}

int ucln(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m -= n;
		else
			n -= m;
	}
	return m + n;
}

int ktToiGian(HONSO x)
{
	int kq = ucln(x.Tu, x.Mau);
	if (kq == 1 && x.Tu / x.Mau == 0)
		return 1;
	return 0;
}