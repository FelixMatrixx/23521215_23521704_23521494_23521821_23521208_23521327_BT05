#include <iostream>
using namespace std;
struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN& );
void Xuat(DIEMKHONGGIAN );
int main()
{
	DIEMKHONGGIAN M;
	Nhap(M);
	cout << "\nToa do diem vua nhap: ";
	Xuat(M);
	return 0;
}
void Nhap(DIEMKHONGGIAN &P)
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
	cout <<"\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}
