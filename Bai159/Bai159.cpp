#include<iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

struct DaThuc
{
	int n;
	DONTHUC f[20];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void DieuChinhBac(DATHUC&);
void Xuat(DATHUC);
int main()
{
	DATHUC g;
	Nhap(g);
	DieuChinhBac(g);
	Xuat(g);
	return 0;
}
void Nhap(DATHUC& g)
{
	cout << "Nhap so phan tu cua da thuc: ";
	cin >> g.n;
	for (int i = 0; i < g.n; i++)
	{
		cout << "Nhap he so cua phan tu thu " << i + 1 << ": ";
		cin >> g.f[i].a;
		cout << "Nhap so mu cua phan tu thu " << i + 1 << ": ";
		cin >> g.f[i].n;
	}
}
void DieuChinhBac(DATHUC& g)
{
	for (int i = 0; i < g.n - 1; i++)
		for (int j = i + 1; j < g.n; j++)
		{
			if (g.f[i].n > g.f[j].n)
			{
				DONTHUC temp = g.f[i];
				g.f[i] = g.f[j];
				g.f[j] = temp;
			}
		}
}
void Xuat(DATHUC g)
{
	for (int i = 0; i < g.n; i++)
	{
		cout << g.f[i].a << "x" << g.f[i].n << " ";
	}
}