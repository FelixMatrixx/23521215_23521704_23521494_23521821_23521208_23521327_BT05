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

int main()
{
	TAMGIAC tg;
	Nhap(tg);
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
