#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;

};
typedef struct diem DIEM;
void Nhap(DIEM[], int&);
void Nhap(DIEM&);
void Xuat(DIEM);
void XuatTamGiac(DIEM[], int);
bool Ktra(DIEM, DIEM, DIEM, DIEM);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	XuatTamGiac(a, n);
	return 0;

}
void Nhap(DIEM& a)
{
	cout << "Nhap  x ";
	cin >> a.x;
	cout << "Nhap y ";
	cin >> a.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] " << endl;
		Nhap(a[i]);
	}
}
void Xuat(DIEM a)
{
	cout << "co toa do la (" << a.x << "," << a.y << ") ";
}
void XuatTamGiac(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n-3; i++)// chon diem A thu nhat
	{
		if (dem == 1)
			break;
		for (int j = i + 1; j <= n - 2; j++) // chon diem B thu 2
		{
			if (dem == 1)
				break;
			for (int h = j + 1; h <= n - 1; h++)
			{// chon diem C thu 3 de lap tam giac
				if (dem == 1)
					break;
				for (int g = 0; g < n; g++) //chon diem M bat ki de xem co thuoc tam giac khong
				{
					if (Ktra(a[i], a[j], a[h], a[g]) and i != g and  j!=g and h!=g)
					{
						cout << "Tam Giac thoa man la " << endl;
						cout << "Diem A ";
						Xuat(a[i]);
						cout << endl;
						cout << "Diem B ";
						Xuat(a[j]);
						cout << endl;
						cout << "Diem C ";
						Xuat(a[g]);
						cout << endl;
						dem++;
						break;
					}


				}
			}
		}
						
	}
	if (dem == 0)
		cout << "Khong co tam giac thoa man ";
}
bool Ktra(DIEM A, DIEM B, DIEM C, DIEM M)
{
	float SABC = abs(A.x * B.y + B.x * C.y + C.x * A.y - B.x * A.y - C.x * B.y - A.x * C.y) / 2;
	float SMAB = abs(A.x * B.y + B.x * M.y + M.x * A.y - B.x * A.y - M.x * B.y - A.x * M.y) / 2;
	float SMBC = abs(M.x * B.y + B.x * C.y + C.x * M.y - B.x * M.y - C.x * B.y - M.x * C.y) / 2;
	float SMAC = abs(A.x * M.y + M.x * C.y + C.x * A.y - M.x * A.y - C.x * M.y - A.x * C.y) / 2;
	float S = SMAB + SMBC + SMAC;
	if (S == SABC)
		return true;
	else
		return false;
}
