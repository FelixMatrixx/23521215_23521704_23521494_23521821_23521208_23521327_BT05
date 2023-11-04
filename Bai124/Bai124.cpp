#include <iostream>
#include <iomanip>
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

void Nhap(DIEM&);
void Xuat(DIEM);
int KtThuoc(DUONGTRON, DIEM);
float KhoangCach(DIEM, DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

int main()
{

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
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DUONGTRON & c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) +
		(P.y - Q.y) * (P.y - Q.y));
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}