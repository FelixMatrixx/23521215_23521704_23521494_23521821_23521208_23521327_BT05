#include <iostream>
#include <iomanip>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
int ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So dong co chua toan so phuc thoa dieu kien la: ";
	cout << DemDong(a, m, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
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
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

int ktDong(SOPHUC a[][100], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j].thuc * a[d][j].ao <= 0)
			flag = 0;
	return flag;
}

int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, m, i))
			dem++;
	return dem;
}