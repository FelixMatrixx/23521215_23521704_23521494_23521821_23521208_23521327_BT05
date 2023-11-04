#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Sophuc
{
	float thuc;
	float ao;
};
typedef struct Sophuc SOPHUC;
void Nhap(SOPHUC&);
SOPHUC Tong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);
int main()
{
	SOPHUC A, B;
	cout << "Nhap so phuc 1 "<<endl;
	Nhap(A);
	cout << "Nhap so phuc 2 "<<endl;
	Nhap(B);
	SOPHUC kq = Tong(A, B);
	cout << "Tong 2 so phuc la ";
	Xuat(kq);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc ";
	cin >> x.thuc;
	cout << "Nhap ao ";
	cin >> x.ao;
}
SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc = x.thuc + y.thuc;
	temp.ao = x.ao + y.ao;
	return temp;
}
void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc ";
	cout << x.thuc;
	cout << "\n Phan ao ";
	cout << x.ao;
}