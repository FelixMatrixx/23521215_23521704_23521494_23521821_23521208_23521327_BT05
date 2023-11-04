#include <iostream>
#include <cmath>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM);
int main()
{
	DIEM M;
	cout << "Nhap toa do diem\n";
	Nhap(M);
	cout << "Toa do diem vua nhap: ";
	Xuat(M);
	cout << "\nKhoang cach den goc toa do: " << KhoangCach(M);
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
	cout << "(" << P.x << ", " << P.y << ")";
}

float KhoangCach(DIEM P)
{
	float kc = sqrt(pow(P.x, 2) + pow(P.y, 2));
	return kc;
}