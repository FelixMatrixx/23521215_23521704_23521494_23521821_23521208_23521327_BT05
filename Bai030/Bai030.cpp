#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
bool Kiemtraphan4(DIEM);
int main()
{
	DIEM A;
	cout << "Nhap toa do diem 1 " << endl;
	Nhap(A);
	if (Kiemtraphan4(A))
		cout << "Diem thuoc phan tu thu IV ";
	else
		cout << "Diem khong thuoc phan tu thu IV ";
	return 0;
}
void Nhap(DIEM& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
}
bool Kiemtraphan4(DIEM P)
{
	if (P.x > 0 and P.y < 0)
		return true;
	return false;
}