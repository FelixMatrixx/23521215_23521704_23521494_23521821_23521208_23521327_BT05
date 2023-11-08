#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[][100], int&, int&);

void QuyDong(PHANSO&, PHANSO&);
int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[][100], int, int);

#include <iostream>

int main()
{
	PHANSO b[100][100];
	int k, l;
	Nhap(b, k, l);
	PHANSO kq = LonNhat(b, k, l);
	cout << "\nPhan so lon nhat: ";
	Xuat(kq);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "\nNhap m: ";
	cin >> m;
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Nhap(a[i][j]);
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}
int ucln(int m, int n)
{
	int a = abs(m);
	int b = abs(n);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

void QuyDong(PHANSO& a, PHANSO& b)
{
	int temp = a.Mau * b.Mau;
	a.Tu *= b.Mau;
	b.Tu *= a.Mau;
	a.Mau = temp;
	b.Mau = temp;
}

int SoSanh(PHANSO a, PHANSO b)
{
	PHANSO m = a;
	PHANSO n = b;
	QuyDong(m, n);
	if (m.Tu > n.Tu)
		return 1;
	return 0;
}

PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], temp) == 1)
				temp = a[i][j];
	return temp;
}