#include <iostream>

using namespace std;

struct Ngay
{
	int ng;
	int th;
	int n;
};
typedef struct Ngay NGAY;

void Nhap(NGAY[], int&);
void Nhap(NGAY&);
void Xuat(NGAY[], int);
void Xuat(NGAY&);

int main()
{
	NGAY a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay, thang, nam a[" << i << "]:\n";
		Nhap(a[i]);
	}
}
void Nhap(NGAY& D)
{
	cout << "Nhap ngay: ";
	cin >> D.ng;
	cout << "Nhap thang: ";
	cin >> D.th;
	cout << "Nhap nam: ";
	cin >> D.n;
}
void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}
void Xuat(NGAY& D)
{
	cout << "\nNgay: " << D.ng;
	cout << "\nThang: " << D.th;
	cout << "\nNam: " << D.n;
}