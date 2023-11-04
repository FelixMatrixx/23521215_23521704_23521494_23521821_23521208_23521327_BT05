#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Nhap(PHANSO[][50], int& ,int&);
void Xuat(PHANSO);
void Xuat(PHANSO[][50], int , int );

int main()
{
	PHANSO a[50][50];
	int m, n;
	Nhap(a, m,n);
	Xuat(a, m, n);
	
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu ";
	cin >> a.tu;
	cout << "Nhap mau ";
	cin >> a.mau;
}
void Nhap(PHANSO a[][50], int& m , int& n )
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	int so = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan so " << so++ << ": " << endl;
			Nhap(a[i][j]);
		}
	}
}
void Xuat(PHANSO a)
{
	cout << setw(6)<<a.tu << "/" << a.mau;
}
void Xuat(PHANSO a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			Xuat(a[i][j]);
		}
		cout << endl;
	}
}