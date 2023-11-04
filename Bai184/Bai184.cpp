#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
int ktDuong(PHANSO);
void Nhap(PHANSO a[], int&);
int DemDuong(PHANSO[], int);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "So luong phan so duong trong mang la: " << DemDuong(a, n);
	return 0;
}

void Nhap(PHANSO& ps)
{
	cout << "\nNhap tu: ";
	cin >> ps.Tu;
	cout << "\nNhap mau: ";
	cin >> ps.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDuong(a[i]))
			dem ++;
	return dem;
}