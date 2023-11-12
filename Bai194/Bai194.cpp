#include <iostream>
using namespace std;
struct SoPhuc
{
	int thuc;
	int ao;
};
typedef SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

void HoanVi(SOPHUC&, SOPHUC&);
void SapXep(SOPHUC[], int);
int main()
{
	SOPHUC a[50];
	int n;
	Nhap(a, n);
	SapXep(a, n);
	cout << "Mang sau khi sap xep la:\n";
	Xuat(a,n);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.thuc;
	cout << "Nhap ao: ";
	cin >> x.ao;
}
void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.thuc << endl;
	cout << "Phan ao: " << x.ao;
}


void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]\n";
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]\n";
		Xuat(a[i]);
		cout << endl;
	}

}
void HoanVi(SOPHUC &a, SOPHUC& b)
{
	SOPHUC temp = a;
	a = b;
	b = temp;
}
void SapXep(SOPHUC a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (a[i].thuc > a[j].thuc)
				HoanVi(a[i], a[j]);
}

//done