#include<iostream>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][20], int&, int&);
void Xuat(DIEM);
void Xuat(DIEM[][20], int, int);
int main()
{
	DIEM a[20][20];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "Nhap tung do: ";
	cin >> a.x;
	cout << "Nhap hoanh do: ";
	cin >> a.y;
}
void Nhap(DIEM a[][20], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << "," << a.y << ")";
}
void Xuat(DIEM a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
	}
}