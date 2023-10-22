#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&, DIEM&);
void Xuat(DIEM, DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	Nhap(P, Q);
	Xuat(P, Q);
	cout << "\nKhoang cach: " << KhoangCach(P, Q);
	return 1;
}

void Nhap(DIEM& P, DIEM& Q)
{
	cout << "Nhap toa do diem P\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap toa do diem Q\nNhap x: ";
	cin >> Q.x;
	cout << "Nhap y: ";
	cin >> Q.y;
}

void Xuat(DIEM P, DIEM Q)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nToa do diem P: \nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nToa do diem Q: \nx: " << Q.x;
	cout << "\ny: " << Q.y;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}