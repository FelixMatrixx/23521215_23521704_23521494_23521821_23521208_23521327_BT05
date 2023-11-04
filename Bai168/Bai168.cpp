#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct dathuc
{
	int  n;
	float a[100];

};
typedef struct dathuc DATHUC;
void Nhap(DATHUC&);
DATHUC operator+(DATHUC, DATHUC);
void Xuat(DATHUC);
int main()
{
	DATHUC f;
	cout << "Nhap da thuc f " << endl;
	Nhap(f);
	DATHUC g;
	cout << "Nhap da thuc g " << endl;
	Nhap(g);
	DATHUC temp = f + g;
	Xuat(temp);
	return 0;
}
void Nhap(DATHUC& f)
{
	cout << "Nhap he so n ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}
DATHUC operator+ (DATHUC f, DATHUC g)
{
	DATHUC temp = { 0,0 };
	if (f.n > g.n)
		temp.n = f.n;
	else
		temp.n = g.n;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	while (temp.a[temp.n] == 0) // rut gon 
		temp.n--;
	return temp;
}
void Xuat(DATHUC f)
{
	for (int i = f.n; i > 0; i--)
		cout << f.a[i] << "x^" << i << "+ ";
	cout << f.a[0];
}