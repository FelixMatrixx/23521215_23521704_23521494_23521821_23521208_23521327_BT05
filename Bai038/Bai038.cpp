#include <iostream>
using namespace std;
struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef DiemKhongGian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCach(DIEMKHONGGIAN);
int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap toa do diem\n";
	Nhap(A);
	cout << "Toa do diem vua nhap: ";
	Xuat(A);
	cout << "\nKhoang cach den goc toa do: " << KhoangCach(A);
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
void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")";
}
float KhoangCach(DIEMKHONGGIAN P)
{
	float kc = sqrt(pow(P.x, 2) + pow(P.y, 2) + pow(P.z, 2));
	return kc;
}