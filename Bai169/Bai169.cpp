#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int LonNhat(int, int);
void GiamBac(DATHUC&);

DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);


int main()
{
	DATHUC f;
	cout << "Nhap f: ";
	Nhap(f);
	Xuat(f);
	DATHUC g;
	cout << "\nNhap g: ";
	Nhap(g);
	Xuat(g);
	DATHUC hieu = f - g;
	cout << "\nHieu 2 da thuc: ";
	Xuat(hieu);
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(3) << "(" << f.a[i] << ")" << "x^" << i << " + ";
	}
	cout << setw(3) << "(" << f.a[0] << ")";
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0 && f.n > 0)
		f.n--;
}

int LonNhat(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	GiamBac(temp);
	return temp;
}

DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
		g.a[i] = -g.a[i];
	return f + g;
}
