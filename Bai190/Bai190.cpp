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
void Nhap(PHANSO a[], int&);
void SapTang(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void Xuat(PHANSO);
void Xuat(PHANSO [], int);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	SapTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(PHANSO& P)
{
	cout << "\nNhap tu: ";
	cin >> P.Tu;
	cout << "\nNhap mau: ";
	cin >> P.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}

void SapTang(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]) == 1)
				HoanVi(a[i], a[j]);
	}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp;
	temp = a;
	a = b;
	b = temp;
}

void Xuat(PHANSO P)
{
	cout << "\nTu: " << P.Tu;
	cout << "\nMau: " << P.Mau;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: \n";
		Xuat(a[i]);
	}
}