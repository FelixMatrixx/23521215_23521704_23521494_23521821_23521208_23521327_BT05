#include <iostream>

using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&, float&);
float TinhGiaTri(DATHUC, float);

int main()
{
	DATHUC F;
	float x;
	Nhap(F, x);
	cout << "Gia tri da thuc tai x0 = " << x << " la: " << TinhGiaTri(F, x);
	return 0;
}

void Nhap(DATHUC& f, float& x)
{
	cout << "Nhap bac da thuc F: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
	cout << "Nhap gia tri x0: ";
	cin >> x;
}
float TinhGiaTri(DATHUC f, float x)
{
	float s = 0;
	for (int i = f.n; i >= 0; i--)
		s += f.a[i] * pow(x, i);
	return s;
}