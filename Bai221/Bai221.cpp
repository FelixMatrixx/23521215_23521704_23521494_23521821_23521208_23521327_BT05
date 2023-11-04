#include <iostream>

using namespace std;

struct diem
{
	int x;
	int y;
};
typedef struct diem DIEM;

void Nhap(DIEM[][100], int&, int&, DIEM&);
void Nhap(DIEM&);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM a[100][100], k;
	int m, n;
	Nhap(a, m, n, k);
	cout << "So lan xuat hien cua toa do diem do la: " << TanSuat(a, m, n, k);
	return 0;
}

void Nhap(DIEM a[100][100], int& m, int& n, DIEM& k)
{
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
	cout << "\nNhap toa do mot diem dem tan suat\nNhap x: ";
	cin >> k.x;
	cout << "Nhap y: ";
	cin >> k.y;
}
void Nhap(DIEM& D)
{
	cout << "\nNhap toa do\nx: ";
	cin >> D.x;
	cout << "\ny: ";
	cin >> D.y;
}
int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[100][100], int m, int n, DIEM K)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], K))
				dem++;
	return dem;
}
