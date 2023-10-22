#include <iostream>

using namespace std;

struct sophuc
{
	int Thuc;
	int Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC[][100], int&, int&);
void Nhap(SOPHUC&);
SOPHUC ThucLonNhat(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So phuc co phan thuc lon nhat la: \n" << "Phan thuc: " << ThucLonNhat(a, m, n).Thuc << "\nPhan ao: " << ThucLonNhat(a, m, n).Ao;
	return 0;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
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
void Nhap(SOPHUC& A)
{
	cout << "\nNhap phan thuc: ";
	cin >> A.Thuc;
	cout << "\nNhap phan ao: ";
	cin >> A.Ao;
}
SOPHUC ThucLonNhat(SOPHUC a[][100], int m, int n)
{
	SOPHUC lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > lc.Thuc)
				lc = a[i][j];
	return lc;
}