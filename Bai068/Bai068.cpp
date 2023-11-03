#include <iostream>
using namespace std;
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef SoPhuc SOPHUC;
void Nhap(SOPHUC &);
void Xuat(SOPHUC);
SOPHUC operator*(SOPHUC,SOPHUC);
int main()
{
	SOPHUC A,B;
	cout << "Nhap so phuc thu nhat\n";
	Nhap(A);
	cout << "Nhap so phuc thu hai\n";
	Nhap(B);
	cout << "So phuc thu nhat: ";
	Xuat(A);
	cout << "\nSo phuc thu hai: ";
	Xuat(B);
	cout << "\nTich hai so phuc la: ";
	Xuat(A * B);
	return 0;
}
void Nhap(SOPHUC & z)
{
	cout << "Nhap thuc: ";
	cin >> z.thuc;
	cout << "Nhap ao: ";
	cin >> z.ao;
}
void Xuat(SOPHUC z)
{
	cout << z.thuc << " + " << z.ao << "i";
}
SOPHUC operator*(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.thuc= x.thuc * y.thuc - x.ao * y.ao;
	temp.ao = x.thuc * y.ao + x.ao * y.thuc;
	return temp;
}