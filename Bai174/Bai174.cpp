#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// VIET HAM XUAT MANG TOA DO CAC DIEM
struct diem
{
	float x;
	float y;

};
typedef struct diem DIEM;
void Nhap(DIEM [], int&);
void Nhap(DIEM& );
void Xuat(DIEM);
void Xuat(DIEM[], int);
int main()
{
	DIEM a[100];
	int n;
	Nhap(a,n);
	Xuat(a,n);
	return 0;

}
void Nhap(DIEM& a)
{
	cout << "Nhap  x ";
	cin >> a.x;
	cout << "Nhap y ";
	cin >> a.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] " <<endl;
		Nhap(a[i]);
	}
}
void Xuat(DIEM a)
{
	cout << "co toa do la (" << a.x << "," << a.y << ") ";
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Mang a[" <<i<<"] " << endl;
		Xuat(a[i]);
	}
}