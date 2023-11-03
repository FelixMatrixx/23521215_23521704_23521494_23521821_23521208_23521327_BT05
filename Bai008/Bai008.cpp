#include <iostream>
#include <iomanip>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
int main()
{
	DONTHUC f;
	Nhap(f);
	cout << "\nDon thuc vua nhap: ";
	Xuat(f);
	return 0;
}
void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << setw(6);
	cout << fixed << setprecision(3);
	cout << "\nHe So: " << f.a;
	cout << "\nSo Mu: " << f.n;
}