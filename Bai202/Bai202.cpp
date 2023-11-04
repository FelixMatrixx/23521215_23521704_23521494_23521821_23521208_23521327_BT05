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
int ktDoiMotCatNhau(DUONGTRON[], int);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);


int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	ktDoiMotCatNhau(a, n);
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

float KhoangCach(DIEM a, DIEM b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}

int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = 0;
	return flag;
}