#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&, DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P, Q;
	Nhap(P, Q);
	Xuat(P, Q);
	cout << "\nKhoang cach: " << KhoangCachX(P, Q);
	return 1;
}

void Nhap(DIEMKHONGGIAN& P, DIEMKHONGGIAN& Q)
{
	cout << "Nhap toa do diem P\nNhap x: ";
	cin >> P.x;
	cout << "Nhap toa do diem Q\nNhap x: ";
	cin >> Q.x;
}

void Xuat(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nToa do diem P: \nx: " << P.x;
	cout << "\nToa do diem Q: \nx: " << Q.x;
}

float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.x - P.x);
}