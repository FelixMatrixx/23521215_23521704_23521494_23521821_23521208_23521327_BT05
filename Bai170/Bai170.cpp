#include <iostream>
#include<iomanip>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int DemHoanhDoDuong(DIEM[], int);
DIEM TungDoLonNhat(DIEM[], int);
float KhoangCachDenGoc(DIEM P);
DIEM TimDiemGanToaDo(DIEM[], int);

float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);

bool ktTrung(DIEM, DIEM );
int TanSuat(DIEM[], int, DIEM);
int DemDiem(DIEM[], int);
int main()
{
	DIEM a[50];
	int n;
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int DemHoanhDoDuong(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].x > 0)
			dem++;
	}
	return dem;
}
DIEM TungDoLonNhat(DIEM a[], int n)
{
	DIEM  lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].y > lc.y)
			lc = a[i];
	return lc;
}
float KhoangCachDenGoc(DIEM P)
{
	float kc = sqrt(P.x * P.x + P.y * P.y);
	return kc;
}
DIEM TimDiemGanToaDo(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachDenGoc(a[i]) < KhoangCachDenGoc(lc))
			lc = a[i];
	return lc;
}
float KhoangCach(DIEM P, DIEM Q)
{
	float kc = sqrt((Q.x * Q.x - P.x * P.x) + (Q.y * Q.y - P.y * P.y));
	return kc;
}
void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (KhoangCach(P, Q) > KhoangCach(a[i], a[j]))
			{
				P = a[i];
				Q = a[j];
			}
}
bool ktTrung(DIEM M, DIEM N)  
{
	if (M.x == N.x && M.y == N.y)
		return true;
	return false;
}
int TanSuat(DIEM a[], int n, DIEM P)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
		if (ktTrung(a[i], P))
			Dem++;
	return Dem;

}
int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem;
}
//not yet
