#include <iostream>
using namespace std;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
int main()
{
	DUONGTHANG a[50];
	int n;
	Nhap(a, n);
	return 0;

}
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << "a = ";
	cout << d.a << endl;
	cout << "b = ";
	cout << d.b << endl; 
	cout << "c = ";
	cout << d.c;
}
void Nhap(DUONGTHANG a[], int& n) 
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
