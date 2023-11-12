#include<iostream>
using namespace std;
struct DaThuc
{
	float a[50];
	int n;
};
typedef DaThuc DATHUC;
void Nhap(DATHUC&);
void DieuChinhBac(DATHUC& );
void Xuat(DATHUC);
int main()
{
	DATHUC f;
	Nhap(f);
	DieuChinhBac(f);
	Xuat(f);
	return 0;
}
void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> f.a[i];
	}
}
void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
		cout << f.a[i] << "x^" << i << " + ";
	cout << f.a[0];
}
void DieuChinhBac(DATHUC&f)
{
	for (int i = f.n; f.a[i] == 0; i--)
		f.n--;
}