#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO[][100], int&, int&);
void Nhap(PHANSO&);
int ktToiGian(PHANSO);
void Xuat(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);
void Xuat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);
void LietKe(PHANSO[][100], int, int);
int UCLN(int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
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
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}
void Nhap(PHANSO& A)
{
	cout << "\nNhap tu: ";
	cin >> A.Tu;
	cout << "\nNhap mau: ";
	cin >> A.Mau;
}
void Xuat(PHANSO b[], int k)
{
	for (int i = 0; i < k; i++)
		Xuat(b[i]);
}
void Xuat(PHANSO B)
{
	cout << B.Tu << "/" << B.Mau << endl;
}
void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
			{
				b[k] = a[i][j];
				k++;
			}
	SapTang(b, k);
	Xuat(b, k);
}
void SapTang(PHANSO b[100], int k)
{
	for (int i = 0; i < k - 1; i++)
		if (SoSanh(b[i], b[i+1]) == 1)
			HoanVi(b[i], b[i+1]);
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
void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
}
int ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}