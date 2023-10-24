#include <iostream>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void QuiDongMau(PHANSO &, PHANSO &);
int main()
{
	PHANSO A, B;
	cout << "Nhap phan so thu nhat\n";
	Nhap(A);
	cout << "Nhap phan so thu hai\n";
	Nhap(B);
	cout << "Phan so thu nhat: ";
	Xuat(A);
	cout << "\nPhan so thu hai: ";
	Xuat(B);
	QuiDongMau(A, B);
	cout << "\nPhan so thu nhat sau khi quy dong: ";
	Xuat(A);
	cout << "\nPhan so thu nhat sau khi quy dong: ";
	Xuat(B);
	return 0;
}
void Nhap(PHANSO& P)
{
	cout << "Nhap tu: ";
	cin >> P.tu;
	cout << "Nhap mau: ";
	cin >> P.mau;
}
void Xuat(PHANSO P)
{
	cout << P.tu << "/" << P.mau;
}
void QuiDongMau(PHANSO &x, PHANSO &y)
{
	int mc;
	mc = x.mau * y.mau;
	x.tu = x.tu * y.mau;
	y.tu = y.tu * x.mau;
	x.mau = mc;
	y.mau = mc;
}