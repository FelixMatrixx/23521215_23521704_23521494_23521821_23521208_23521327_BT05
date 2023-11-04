#include <iostream>
#include <iomanip>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};

typedef struct ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);

int main()
{
	NGAY x[100];
	int n;
	Nhap(x, n);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay A[" << i << "]:\n";
		Nhap(a[i]);
	}
}