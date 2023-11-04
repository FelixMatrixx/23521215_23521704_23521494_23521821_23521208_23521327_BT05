#include <iostream>

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
void Xuat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	TAMGIAC T;
	Nhap(T);
	Xuat(T);
	return 1;
}

void Nhap(DIEM& D)
{
	cout << "Nhap toa do x:";
	cin >> D.x;
	cout << "Nhap toa do y:";
	cin >> D.y;
}
void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A\n";
	Nhap(t.A);
	cout << "Nhap dinh B\n";
	Nhap(t.B);
	cout << "Nhap dinh C\n";
	Nhap(t.C);
}
void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A:";
	Xuat(t.A);
	cout << "\nToa do dinh B:";
	Xuat(t.B);
	cout << "\nToa do dinh C:";
	Xuat(t.C);
}
void Xuat(DIEM D)
{
	cout << "\nx: " << D.x;
	cout << "\ny: " << D.y;
}