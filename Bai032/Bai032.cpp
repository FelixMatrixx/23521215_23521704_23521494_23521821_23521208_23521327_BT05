#include <iostream>
using namespace std;
struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef DiemKhongGian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN &);
int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap toa do diem\n";
	Nhap(A);
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