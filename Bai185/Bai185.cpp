#include <iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO[], int&);
void Nhap(PHANSO&);
PHANSO LonNhat(PHANSO[], int);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "Phan so lon nhat trong mang la: " << LonNhat(a, n).Tu << "/" << LonNhat(a, n).Mau;
	return 0;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Nhap(PHANSO& A)
{
	cout << "\nNhap tu: ";
	cin >> A.Tu;
	cout << "Nhap mau: ";
	cin >> A.Mau;
}
PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}
int SoSanh(PHANSO A, PHANSO B)
{
	if (A.Tu * B.Mau > B.Tu * A.Mau)
		return 1;
	return 0;
}