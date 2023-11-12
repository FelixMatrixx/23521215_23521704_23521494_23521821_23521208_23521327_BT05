#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM [][50], int& , int& );
void Xuat(DIEM [][50], int , int);
int main()
{
	DIEM a[50][50];
	int m, n;
	Nhap(a, m, n);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
	cout << endl;
}
void Nhap(DIEM a[][50], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]\n";
			Nhap(a[i][j]);
		}
}

