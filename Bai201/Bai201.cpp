#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float r;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);
int ktTiepXucOy(DUONGTRON);
int KiemTra(DUONGTRON[], int);
int main()
{
	DUONGTRON c[20];
	int n;
	Nhap(c, n);
	int kq = KiemTra(c, n);
	if (kq == 1)
		cout << "Co";
	else
		cout << "Khong co";
	return 0;
}
void Nhap(DIEM& I)
{
	cout << "Nhap hoanh do: ";
	cin >> I.x;
	cout << "Nhap tung do: ";
	cin >> I.y;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.r;
}
void Nhap(DUONGTRON c[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron thu " << i + 1 << ": \n";
		Nhap(c[i]);
	}
}
int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.y) == c.r)
		return 1;
	return 0;
}
int KiemTra(DUONGTRON c[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktTiepXucOy(c[i]) == 1)
			return 1;
	return 0;
}