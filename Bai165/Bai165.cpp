#include<iostream>
using namespace std;

struct DaThuc
{
	int n;
	float a[20];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void DaoHam(DATHUC&);
void Xuat(DATHUC);
int main()
{
	DATHUC g;
	Nhap(g);
	DaoHam(g);
	Xuat(g);
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
void DaoHam(DATHUC& g)
{
	for (int i = 0; i < g.n; i++)
		g.a[i] = g.a[i + 1] * (i + 1);
	g.n--;
}
void Xuat(DATHUC g)
{
	for (int i = 0; i <= g.n; i++)
	{
		cout << g.a[i] << "x" << i << " ";
	}
}