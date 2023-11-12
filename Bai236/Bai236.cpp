#include <iostream>
using namespace std;
struct SoPhuc
{
	int thuc;
	int ao;
};
typedef SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][50], int&, int &);
void Xuat(SOPHUC[][50], int, int );

int ktDuong(SOPHUC);
SOPHUC DuongDau(SOPHUC[][50], int, int);

int main()
{
	SOPHUC a[50][50];
	int m, n;
	Nhap(a, m, n);
	Xuat(DuongDau(a, m, n));
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.thuc;
	cout << "Nhap ao: ";
	cin >> x.ao;
}
void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.thuc << endl;
	cout << "Phan ao: " << x.ao;
}


void Nhap(SOPHUC a[][50], int& m, int& n)
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
void Xuat(SOPHUC a[][50], int m, int n)
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
int ktDuong(SOPHUC z)
{
	if (z.ao > 0 && z.thuc > 0)
		return 1;
	return 0;
}
SOPHUC DuongDau(SOPHUC a[][50], int m, int n)
{
	SOPHUC lc = { 0,0 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktDuong(a[i][j]) == 1)
				return a[i][j];
	return lc;
}