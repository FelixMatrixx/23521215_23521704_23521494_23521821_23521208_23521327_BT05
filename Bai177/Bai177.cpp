#include<iostream>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[],int&);
float KhoangCachGoc(DIEM);
DIEM GanGocNhat(DIEM[], int);
void Xuat(DIEM);
int main()
{
	DIEM a[20];
	int n;
	Nhap(a,n);
	DIEM kq = GanGocNhat(a, n);
	Xuat(kq);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do: ";
	cin >> a.x;
	cout << "Nhap tung do: ";
	cin >> a.y;
}
void Nhap(DIEM a[],int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}
float KhoangCachGoc(DIEM a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}
DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}
void Xuat(DIEM a)
{
	cout << "Tung do: " << a.x << endl;
	cout << "Hoanh do: " << a.y << endl;
}