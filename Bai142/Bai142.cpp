#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(TAMGIAC&);
void Nhap(DIEM&);
DIEM HoanhLonNhat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	DIEM X = HoanhLonNhat(tg);
	cout << "Dinh co hoanh do lon nhat la: ";
	Xuat(X);
	return 0;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}