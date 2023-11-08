#include <iostream>
#include <cmath>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	Nhap(b, k, l);
	Xuat(b, k, l);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\n" << x.Thuc << " + " << x.Ao << "i ";
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "\nNhap m: ";
	cin >> m;
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Nhap(a[i][j]);
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	cout << "\nCac phan tu trong ma tran: \n";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Xuat(a[i][j]);
}