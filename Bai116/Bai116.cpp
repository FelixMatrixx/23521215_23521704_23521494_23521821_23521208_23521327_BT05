#include <iostream>
#include <cmath>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef DonThuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
float GiaTri(DONTHUC, float);
DONTHUC DaoHamCap1(DONTHUC);
DONTHUC operator*(DONTHUC, DONTHUC);
int main()
{
	DONTHUC f;
	float x0;
	Nhap(f);
	cout << "Nhap x0: ";
	cin >> x0;
	cout << "Gia tri cua don thuc tai x0= " << x0 << " la: " << GiaTri(f, x0) << endl;
	return 0;

}
void Nhap(DONTHUC& f)
{
	cout << "Nhap don thuc " << endl;
	cout << "Nhap a: ";
	cin >> f.a;
	cout << "Nhap n: ";
	cin >> f.n;
}

float GiaTri(DONTHUC f, float x)
{
	float S = f.a * pow(x, f.n);
	return S;
}
