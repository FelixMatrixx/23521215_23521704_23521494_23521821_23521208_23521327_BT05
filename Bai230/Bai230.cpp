#include <iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO [][50], int&, int &);
void Xuat(PHANSO[][50], int, int);

int SoSanh(PHANSO, PHANSO);
PHANSO TimNhoNhat(PHANSO[][50], int, int);
int DemNhoNhat(PHANSO[][50], int, int);


int main()
{
	PHANSO a[50][50];
	int m, n;
	Nhap(a, m, n);
	cout << DemNhoNhat(a, m, n);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}
void Nhap(PHANSO a[][50], int& m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]\n";
			Nhap(a[i][j]);
		}
}
void Xuat(PHANSO a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]";
			Xuat(a[i][j]);

		}
		cout << endl;
	}
}
int SoSanh(PHANSO a, PHANSO b)
{
	float ts1 = (float)a.Tu / a.Mau;
	float ts2 = (float)b.Tu / b.Mau;
	if (ts1 < ts2)
		return -1;
	if (ts1 == ts2)
		return 0;
	if (ts1 > ts2)
		return 1;
}
PHANSO TimNhoNhat(PHANSO a[][50], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == -1)
				lc = a[i][j];
	return lc;
}
int DemNhoNhat(PHANSO a[][50], int m, int n)
{
	int dem = 0;
	PHANSO lc = TimNhoNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 0)
				dem++;
	return dem;
}