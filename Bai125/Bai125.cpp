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

void Nhap(DUONGTRON&);
void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DUONGTRON C;
	DIEM P;
	Nhap(C);
	cout << "Nhap diem P: ";
	Nhap(P);
	cout << TuongDoi(C, P);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nx: ";
	cin >> P.x;
	cout << "y: ";
	cin >> P.y;
}
float KhoangCach(DIEM I, DIEM P)
{
	return sqrt(pow((I.x - P.x), 2) + pow((I.y - P.y), 2));
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam duong tron C:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
int TuongDoi(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}