#include<iostream>
using namespace std;

struct DaThuc
{
	int n;
	float a[20];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void GiamBac(DATHUC&);
DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
DATHUC operator/(DATHUC, DATHUC);
void Xuat(DATHUC);
int main()
{
	DATHUC g,h;
	Nhap(g);
	Nhap(h);
	DATHUC u = g / h;
	Xuat(u);
	return 0;
}
void Nhap(DATHUC& g)
{
	cout << "Nhap so bac cua da thuc: ";
	cin >> g.n;
	for (int i = 0; i <= g.n; i++)
	{
		cout << "Nhap he so cua x" << i  << ": ";
		cin >> g.a[i];
	}
}
void GiamBac(DATHUC& g)
{
	while (g.a[g.n] == 0)
		g.n--;
}
DATHUC operator+(DATHUC g, DATHUC h)
{
	DATHUC temp;
	if (g.n > h.n)
		temp.n = g.n;
	else
		temp.n = h.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	for (int i = h.n; i >= 0; i--)
		temp.a[i] += h.a[i];
	GiamBac(temp);
	return temp;
}
DATHUC operator-(DATHUC g, DATHUC h)
{
	for (int i = h.n; i >= 0; i--)
		h.a[i] = -h.a[i];
	return (g + h);
}
DATHUC operator*(DATHUC g, DATHUC h)
{
	DATHUC temp;
	temp.n = g.n + h.n;
	for (int i = 0; i <= temp.n; i++)
	{
		temp.a[i] = 0;
	}
	for (int i = g.n; i >= 0; i--)
		for (int j = h.n; j >= 0; j--)
		{
			temp.a[i + j] += g.a[i] * h.a[j];
		}
	return temp;
}
DATHUC operator/(DATHUC g, DATHUC h)
{
	DATHUC remain = g;
	DATHUC quotient;
	if (g.n - h.n >= 0)
		quotient.n = g.n - h.n;
	else
		quotient.n = 0;
	for (int i = 0; i <= quotient.n; i++)
	{
		quotient.a[i] = 0;
	}
	while (remain.n >= h.n)
	{
		DATHUC temp;
		temp.n = remain.n - h.n;
		for (int i = 0; i <= temp.n; i++)
			temp.a[i] = 0;
		temp.a[temp.n] = remain.a[remain.n] / h.a[h.n];
		DATHUC tru = temp * h;
		remain = remain - tru;
		quotient = quotient + temp;
	}
	return quotient;
}
void Xuat(DATHUC g)
{
	for (int i = 0; i <= g.n; i++)
	{
		cout << g.a[i] << "x" << g.n << " ";
	}
}