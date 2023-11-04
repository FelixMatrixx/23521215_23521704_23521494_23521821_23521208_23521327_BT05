#include <iostream>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&, DIEM&);
int ktThuoc(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG D;
	DIEM A;
	Nhap(D, A);
	if (ktThuoc(D, A))
		cout << "Nam tren.";
	else 
		cout << "Khong thuoc.";
	return 0;
}

void Nhap(DUONGTHANG& d, DIEM& A)
{
	cout << "Nhap duong thang\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
	cout << "Nhap diem\nNhap x: ";
	cin >> A.x;
	cout << "Nhap y: ";
	cin >> A.y;
}
int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}