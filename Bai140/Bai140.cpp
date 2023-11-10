#include <iostream>
#include <cmath>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;
struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef TamGiac TAMGIAC;
void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

float KhoangCach(DIEM, DIEM);
float DienTich(TAMGIAC);
int main()
{
	TAMGIAC x;
	Nhap(x);
	Xuat(x);
	cout << "\nDien tich tam giac: " << DienTich(x);
	return 0;
}
void Nhap(DIEM &P)
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
void Nhap(TAMGIAC& x)
{
	cout << "Nhap A:\n";
	Nhap(x.A);
	cout << "Nhap B:\n";
	Nhap(x.B);
	cout << "Nhap C:\n";
	Nhap(x.C);
}
void Xuat(TAMGIAC x)
{
	cout << "Toa do diem A: ";
	Xuat(x.A);
	cout << "\nToa do diem B: ";
	Xuat(x.B); 
	cout << "\nToa do diem C: ";
	Xuat(x.C);
}
float KhoangCach(DIEM M, DIEM N)
{
	float kc = sqrt(pow(M.x - N.x, 2) + pow(M.y - N.y, 2));
	return kc;
}
float DienTich(TAMGIAC x)
{
	float a, b, c, p, s;
	a = KhoangCach(x.B, x.C);
	b = KhoangCach(x.A, x.C);
	c = KhoangCach(x.A, x.B);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p-b) * (p - c));
	return s;
}
