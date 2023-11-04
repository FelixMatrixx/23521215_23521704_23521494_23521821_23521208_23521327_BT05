#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef diem DIEM;
void Nhap(DIEM&);
void Nhap(DIEM[][50], int&, int&);
bool KTraTrung(DIEM, DIEM);
int TanSuat(DIEM[][50], int, int, DIEM);
int DemKhongTrung(DIEM[][50], int, int);
int main()
{
	DIEM a[50][50];
	int m, n;
	Nhap(a, m,n);
	cout << "So luong la " << DemKhongTrung(a, m, n);
	return 0;

}
void Nhap(DIEM& a)
{
	cout << "Nhap x ";
	cin >> a.x;
	cout << "Nhap y ";
	cin >> a.y;
}
void Nhap(DIEM a[][50], int& m, int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	int so = 1;
	for (int i = 0 ; i < m ; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap diem thu " << so++ << ": " << endl;
			Nhap(a[i][j]);
		}
}
bool KTraTrung(DIEM A, DIEM B)
{
	if (A.x == B.x and A.y == B.y)
		return true;
	return false;
}
int TanSuat(DIEM A[][50], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KTraTrung(A[i][j], P))
				dem++;
	return dem;

}
int DemKhongTrung(DIEM A[][50], int m , int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(A, m, n, A[i][j]) == 1)
				dem++;
	return dem;
	
}