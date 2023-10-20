#include<iostream>

using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
int ktThuoc1(DIEM);
int main()
{
	DIEM P;
	Nhap(P);
	int kt = ktThuoc1(P);
	if (kt == 1)
		cout << "Diem thuoc phan tu thu I.";
	else
		cout << "Diem khong thuoc phan tu thu I.";
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
int ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return 1;
	return 0;
}
