#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);
int main()
{
	SOPHUC z[100];
	int n;
	Nhap(z, n);
	Xuat(z, n);
	return 0;

}
void Nhap(SOPHUC& z)
{
	cout << "Nhap thuc ";
	cin >> z.thuc;
	cout << "Nhap ao ";
	cin >> z.ao;
}
void Nhap(SOPHUC z[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap z[" << i << "] " << endl;
		Nhap(z[i]);
	}
}
void Xuat(SOPHUC z)
{
	cout << "Thuc la " << z.thuc << endl;
	cout << "Ao la " << z.ao <<endl;
}
void Xuat(SOPHUC z[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "So phuc z[" << i << "] co " << endl;
		Xuat(z[i]);
	}
}
