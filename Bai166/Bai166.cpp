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

void Nhap(DATHUC&);
void Xuat(DATHUC);
int GiaiThua(int n);
DATHUC DaoHam(DATHUC);

int main()
{
	DATHUC f;
	Nhap(f);
	DATHUC g = DaoHam(f);
	Xuat(g);
	return 0;
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
	for (int i = f.n; i >= 0; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << "+";
	}
}

int GiaiThua(int n)
{
	int gt = 1;
	for (int i = 1; i <= n; i++)
		gt *= i;
	return gt;
}

DATHUC DaoHam(DATHUC g)
{
	int k;
	cout << "Nhap so k: ";
	cin >> k;
	for (int j = 1; j <= k; j++)
	{
		for (int i = g.n; i >= 0; i--)
		{
			g.a[i-j] = g.a[i] * GiaiThua(i)/GiaiThua(i-j);
		}
		g.n -= j;
	}
	return g;
}