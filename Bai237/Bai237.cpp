#include<iostream>

using namespace std;
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][20], int&, int&);
SOPHUC ThucAoAmCuoi(SOPHUC[][20], int, int);
void Xuat(SOPHUC);
int main()
{
	SOPHUC a[20][20];
	int m, n;
	Nhap(a, m, n);
	SOPHUC kq = ThucAoAmCuoi(a, m, n);
	if (kq.ao == 0 && kq.thuc == 0)
		cout << "Khong ton tai so phuc thoa";
	else
	{
		cout << "So phuc cuoi cung co phan thuc va phan ao am ";
		Xuat(kq);
	}
	return 0;
}
void Nhap(SOPHUC& a)
{
	cout << "Nhap phan thuc: ";
	cin >> a.thuc;
	cout << "Nhap phan ao: ";
	cin >> a.ao;
}
void Nhap(SOPHUC a[][20], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap so phuc A[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
}
SOPHUC ThucAoAmCuoi(SOPHUC a[][20], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		for (int j = n - 1; j >= 0; j--)
			if (a[i][j].thuc < 0 && a[i][j].ao < 0)
				return a[i][j];
	return { 0,0 };
}
void Xuat(SOPHUC a)
{
	cout << "Phan thuc: " << a.thuc << endl;
	cout << "Phan ao: " << a.ao << endl;
}