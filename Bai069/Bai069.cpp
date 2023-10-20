#include<iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
SOPHUC Thuong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);
int main()
{
	SOPHUC x, y;
	Nhap(x);
	Nhap(y);
	SOPHUC kq = Thuong(x, y);
	Xuat(kq);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	float mc = y.Thuc * y.Thuc + y.Ao * y.Ao;
	SOPHUC temp;
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}
void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}