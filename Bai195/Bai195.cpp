#include<iostream>

using namespace std;
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[], int&);
void SapTang(SOPHUC[], int);
void Xuat(SOPHUC);
void Xuat(SOPHUC[], int);
int main()
{
	SOPHUC a[20];
	int n;
	Nhap(a, n);
	SapTang(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(SOPHUC& a)
{
	cout << "Nhap phan thuc: ";
	cin >> a.thuc;
	cout << "Nhap phan ao: ";
	cin >> a.ao;
}
void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].thuc > a[j].thuc)
			{
				SOPHUC temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
void Xuat(SOPHUC a)
{
	cout << "Phan thuc: " << a.thuc << endl;
	cout << "Phan ao: " << a.ao << endl;
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "So phuc thu " << i + 1 << ": \n";
		Xuat(a[i]);
	}
}