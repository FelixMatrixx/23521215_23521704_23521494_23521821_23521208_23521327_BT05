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

DIEM TungDoLonNhat(DIEM[], int);
int main()
{
	DIEM a[50];
	int n;
	Nhap(a, n);
	cout << "Diem co tung do lon nhat la: ";
	Xuat(TungDoLonNhat(a, n));
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
	cout << setw(6);
}
DIEM TungDoLonNhat(DIEM a[], int n)
{
	DIEM  lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i].y > lc.y)
			lc = a[i];
	return lc;
}
//done