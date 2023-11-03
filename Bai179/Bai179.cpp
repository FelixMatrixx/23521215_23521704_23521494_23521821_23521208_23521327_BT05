#include <iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM[], int&);
void Nhap(DIEM&);
int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiem(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	cout << "So luong diem khong trung voi diem khac trong mang la: " << DemDiem(a, n);
	return 0;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Nhap(DIEM& A)
{
	cout << "\nNhap diem x: ";
	cin >> A.x;
	cout << "Nhap diem y: ";
	cin >> A.y;
}
int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktTrung(a[i], P) == 1)
			dem++;
	return dem;
}
int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem;
}