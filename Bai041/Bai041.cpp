#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungOXZ(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	Xuat(P);
	cout << "\nToa do diem doi xung qua Oxz:\n";
	cout << DoiXungOXZ(P).x << "  " << DoiXungOXZ(P).y << "  " << DoiXungOXZ(P).z << endl;
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap toa do diem P\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nToa do diem P: \nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

DIEM DoiXungOXZ(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}