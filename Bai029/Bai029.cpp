#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
int ktThuoc3(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	if (ktThuoc3(P) == 1)
		cout << "\nCo thuoc.\n";
	else
		cout << "\nKhong thuoc.\n";
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap toa do diem P\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

int ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}