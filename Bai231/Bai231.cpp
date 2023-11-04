#include<iostream>

using namespace std;
struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][20], int&, int&);
int ktAm(PHANSO[][20], int, int);
PHANSO AmLonNhat(PHANSO[][20], int, int);
void Xuat(PHANSO);
int main()
{
	PHANSO a[20][20];
	int m,n;
	Nhap(a, m, n);
	PHANSO kq = AmLonNhat(a, m, n);
	if (kq.tu == 0 && kq.mau == 1)
		cout << "Khong co phan so am";
	else
	{
		cout << "Phan so am lon nhat: \n";
		Xuat(kq);
	}
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}
void Nhap(PHANSO a[][20], int& m,int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap A[" << i << "][" << j << "]\n";
			Nhap(a[i][j]);
		}
}
PHANSO TimAm(PHANSO a[][20],int m,int n)
{
	PHANSO temp = { 0, 1 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((float)a[i][j].tu / a[i][j].mau < 0)
				return a[i][j];
	return temp;
}
PHANSO AmLonNhat(PHANSO a[][20], int m, int n)
{
	PHANSO lc = TimAm(a, m, n);
	if (lc.tu == 0 && lc.mau == 1)
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			float gtra = (float)a[i][j].tu / a[i][j].mau;
			float gtrlc = (float)lc.tu / lc.mau;
			if (gtra > gtrlc && gtra < 0)
				lc = a[i][j];
		}
	return lc;
}
void Xuat(PHANSO a)
{
	cout << "Tu: " << a.tu << endl;
	cout << "Mau: " << a.mau << endl;
}
