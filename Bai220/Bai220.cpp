#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	int x;
	int y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
bool ktThuoc3(DIEM);
int DemThuoc3(DIEM[][100],int, int);

int main()
{
	DIEM a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So phan tu trong ma tran thuoc goc phan tu thu 3 la: ";
	cout << DemThuoc3(a, m, m);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do x: ";
	cin >> P.x;
	cout << "Nhap tung do y: ";
	cin >> P.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap diem A[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}

bool ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return true;
	return false;
}
int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}
