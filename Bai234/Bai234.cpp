#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
//DINH NGHIA HAM NHAP SO PHUC
struct SoPhuc
{
	float thuc;
	float ao;
};
typedef struct SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Nhap(SOPHUC[][50], int& , int&);
void Xuat(SOPHUC);
void Xuat(SOPHUC[][50], int, int);
int main()
{
	SOPHUC z[50][50];
	int m;
	int n;
	Nhap(z, m,n);
	Xuat(z, m,n);
	return 0;

}
void Nhap(SOPHUC& z)
{
	cout << "Nhap thuc ";
	cin >> z.thuc;
	cout << "Nhap ao ";
	cin >> z.ao;
}
void Nhap(SOPHUC z[][50], int& m,int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	int so = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap so phuc thu " << so++ << ": " << endl;
			Nhap(z[i][j]);
		}
	}
}
void Xuat(SOPHUC z)
{
	cout << setw(4)<< z.thuc << " + " << z.ao << "i"  ;
}
void Xuat(SOPHUC z[][50], int m,int n)
{
	for (int i = 0; i < m; i++)
	{
		for(int j = 0 ; j <n ; j++)
			Xuat(z[i][j]);
		cout << endl;
	}

}
