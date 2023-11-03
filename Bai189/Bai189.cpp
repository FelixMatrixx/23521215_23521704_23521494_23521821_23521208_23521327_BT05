#include<iostream>

using namespace std;
struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
int TimAm(PHANSO[], int);
int TimViTri(PHANSO[], int);
int main()
{
	PHANSO a[20];
	int n;
	Nhap(a, n);
	int vt = TimViTri(a, n);
	cout << vt;
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
int TimAm(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		float gtri = (float)a[i].tu / a[i].mau;
		if (gtri < 0)
			return i;
		return -1;
	}
}
int TimViTri(PHANSO a[], int n)
{
	int lc = TimAm(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		float gtrii = (float)a[i].tu / a[i].mau;
		float gtrilc = (float)a[lc].tu / a[lc].mau;
		if (gtrii > gtrilc && gtrii < 0)
			lc = i;
	}
	return lc;
}

