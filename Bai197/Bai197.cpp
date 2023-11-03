#include <iostream>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam duong tron C\nx: ";
	cin >> c.I.x;
	cout << "y: ";
	cin >> c.I.y;
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nDuong tron thu " << i + 1;
		Xuat(a[i]);
	}
}
void Xuat(DUONGTRON C)
{
	cout << "\nTam duong tron\nx: ";
	cout << C.I.x;
	cout << "\ny: ";
	cout << C.I.y;
	cout << "\nBan kinh: " << C.R;
}