#include <iostream>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
int ktTrung(DIEM, DIEM);
int main()
{
	DIEM P, Q;
	cout << "Nhap toa do diem 1\n";
	Nhap(P);
	cout << "Nhap toa do diem 2\n";
	Nhap(Q);
	cout << "Toa do diem 1: ";
	Xuat(P);
	cout << "\nToa do diem 2: ";
	Xuat(Q);
	if (ktTrung(P, Q)==1)
		cout << "\nTrung nhau";
	else
		cout << "\nKhong trung nhau";
	return 0;
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
	cout << "(" << P.x << "," << P.y << ")";
}
int ktTrung(DIEM PP, DIEM QQ)
{
	if (PP.x == QQ.x && PP.y == QQ.y)
		return 1;
	return 0;
}