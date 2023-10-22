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

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
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