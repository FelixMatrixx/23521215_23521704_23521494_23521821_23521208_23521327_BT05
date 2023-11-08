#include <iostream>
#include <cmath>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);
SOPHUC operator+(SOPHUC, SOPHUC);

SOPHUC Tong(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	Nhap(b, k);
	SOPHUC tong = Tong(b, k);
	cout << "\nTong: ";
	Xuat(tong);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		Nhap(a[i]);
}

SOPHUC operator+(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0 , 0 };
	for (int i = 0; i < n; i++)
		s = s + a[i];
	return s;
}