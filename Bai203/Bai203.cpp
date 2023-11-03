#include <iostream>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&, DUONGTRON&);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON);
void LietKe(DUONGTRON[], int);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam duong tron C\nx: ";
	cin >> c.I.x;
	cout << "y: ";
	cin >> c.I.y;
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void LietKe(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) == 2 ||
				TuongDoi(a[i], a[j]) == 4)
			{
				Xuat(a[i]);
				Xuat(a[j]);
			}
}
void Xuat(DUONGTRON C)
{
	cout << "\nTam duong tron\nx: ";
	cout << C.I.x;
	cout << "\ny: ";
	cout << C.I.y;
	cout << "\nBan kinh: " << C.R;
}
float KhoangCach(DIEM I, DIEM P)
{
	return sqrt(pow((I.x - P.x), 2) + pow((I.y - P.y), 2));
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