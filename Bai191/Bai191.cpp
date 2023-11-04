#include <iostream>

using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC[], int&);
void Nhap(SOPHUC&);

int main()
{
	SOPHUC a[100];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Nhap(SOPHUC& A)
{
	cout << "\nNhap phan thuc: ";
	cin >> A.Thuc;
	cout << "Nhap phan ao: ";
	cin >> A.Ao;
}
