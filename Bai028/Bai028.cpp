#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
int ktThuoc2(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	int kt = ktThuoc2(P);
	if (kt == 1)
		cout << "Diem thuoc phan tu thu II.";
	else
		cout << "Diem thuoc khong thuoc phan tu thu II.";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

int ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		return 1;
	return 0;
}