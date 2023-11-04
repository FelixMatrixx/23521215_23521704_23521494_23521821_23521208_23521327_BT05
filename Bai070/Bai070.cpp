#include <iostream>
#include <iomanip>

using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

int main()
{
	SOPHUC A;
	Nhap(A);
	int n;
	cout << "Nhap bac n: ";
	cin >> n;
	cout << "Luy thua bac n cua so phuc la: ";
	LuyThua(A, n);
	Xuat(A);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}

SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC temp = { 1,0 };
	for (int i = 1; i <= n; i++)
		temp = Tich(temp, x);
	return temp;
}
