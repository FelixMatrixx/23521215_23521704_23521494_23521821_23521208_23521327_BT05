#include<iostream>
#include<cmath>
using namespace std;
struct DonThuc
{
	float a;
	int n;
};
typedef DonThuc DONTHUC;
void Nhap(DONTHUC& f);
int main()
{
	DONTHUC f;
	cout << "Nhap don thuc";
	Nhap(f);

	return 0;
}
void Nhap(DONTHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	cout << "Nhap a: ";
	cin >> f.a;
}

