#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	DIEM P, Q;
	GanNhauNhat(a, n, P, Q);
	Xuat(P);
	Xuat(Q);
	return 0;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "Diem co toa do la: ";
	cout << "x: " << P.x << endl;
	cout << "y: " << P.y << endl;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x-Q.x) * (P.x - Q.x) + (P.y-Q.y) * (P.y-Q.y));
}

void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0;i<n-1;i++)
		for (int j =i+1;j<n;j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
}