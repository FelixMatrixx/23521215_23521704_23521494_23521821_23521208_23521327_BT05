#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

int LonNhat(int a, int b);
void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC Tong(DATHUC f, DATHUC g);
void GiamBac(DATHUC& f);

int main()
{
	DATHUC f;
	DATHUC g;
	cout << "Nhap da thuc thu nhat: \n";
	Nhap(f);
	cout << "Nhap da thuc thu hai: \n";
	Nhap(g);
	DATHUC h = Tong(f, g);
	Xuat(h);
	return 0;
}


int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "("<<f.a[i]<<")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ")";
}

DATHUC Tong(DATHUC f, DATHUC g)
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

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}