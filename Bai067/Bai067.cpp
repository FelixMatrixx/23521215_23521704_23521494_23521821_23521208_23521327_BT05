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

SOPHUC operator-(SOPHUC, SOPHUC);

int main()
{
	SOPHUC z1;
	cout << "\nNhap so phuc 1: ";
	Nhap(z1);
	Xuat(z1);
	SOPHUC z2;
	cout << "\nNhap so phuc 2: ";
	Nhap(z2);
	Xuat(z2);

	SOPHUC kq = z1 - z2;
	cout << "\nHieu: ";
	Xuat(kq);

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

SOPHUC operator-(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}