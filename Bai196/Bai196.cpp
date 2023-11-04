#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	int x; 
	int y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(DIEM& I)
{
	cout << "x: ";
	cin >> I.x;
	cout << "y: ";
	cin >> I.y;
}

void Nhap(DUONGTRON& C)
{
	cout << "Nhap tam:\n";
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: " << endl;
		Nhap(a[i]);
	}
}
