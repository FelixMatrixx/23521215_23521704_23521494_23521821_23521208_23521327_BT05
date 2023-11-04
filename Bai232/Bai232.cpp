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
void Nhap(PHANSO[][100], int&, int&);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[][100], int, int);
int SoSanh(PHANSO, PHANSO);
void Xuat(PHANSO);
void Xuat(PHANSO[][100],int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	SapTang(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(PHANSO& P)
{
	cout << "Nhap tu so: ";
	cin >> P.Tu;
	cout << "Nhap mau so: ";
	cin >> P.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

void HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp;
	temp = a;
	a = b;
	b = temp;
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

void SapTang(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i <= m * n - 2; i++)
		for (int j = 0; j <= m * n - 1; j++)
			if (SoSanh(a[i / n][i % n], a[j / n][j % n]) == 1)
				HoanVi(a[i / n][i % n], a[j / n][j % n]);
}

void Xuat(PHANSO P)
{
	cout << "Tu: " << P.Tu;
	cout << endl;
	cout << "Mau: " << P.Mau;
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}