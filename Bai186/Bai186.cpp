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
void Nhap(PHANSO [], int&);
void Xuat(PHANSO);
void Xuat(PHANSO [], int);
int ViTriNhoNhat(PHANSO[], int);
int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "Vi tri nho nhat la " << ViTriNhoNhat(a, n);
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu ";
	cin >> a.tu;
	cout << "Nhap mau ";
	cin >> a.mau;
}
void Nhap(PHANSO a[] , int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] " << endl;
		Nhap(a[i]);
	}
}

int ViTriNhoNhat(PHANSO a[], int n)
{
	float Min = (float)a[0].tu / a[0].mau;
	int vtMin = 0;
	for (int i = 0; i < n; i++)
	{
		if ((float)a[i].tu / a[i].mau < Min)
		{
			Min = (float)a[i].tu / a[i].mau;
			vtMin = i;
		}
	}
	return vtMin;
}