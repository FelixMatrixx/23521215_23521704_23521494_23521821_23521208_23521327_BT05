#include<iostream>

using namespace std;

struct DiemKhongGian
{
	int x;
	int y;
	int z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN);
void Xuat(DIEMKHONGGIAN);
int main()
{
	DIEMKHONGGIAN P;
	Nhap(P);
	DIEMKHONGGIAN PP = DoiXungGoc(P);
	cout << "Toa do diem doi xung qua goc toa do: ";
	Xuat(PP);
	return 0;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
DIEMKHONGGIAN DoiXungGoc(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = -P.y;
	temp.z = -P.z;
	return temp;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}