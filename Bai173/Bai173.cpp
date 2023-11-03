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

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
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