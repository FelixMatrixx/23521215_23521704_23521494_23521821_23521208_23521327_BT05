#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
struct Diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct Diemkhonggian DIEMKHONGGIAN;
struct Hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct Hinhcau HINHCAU;
void Nhap(DIEMKHONGGIAN&);
void Nhap(HINHCAU&);
float TheTich(HINHCAU);
int main()
{
	HINHCAU c;
	Nhap( c);
	cout << "The tich la " <<TheTich(c);

	return 0;
}
void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x ";
	cin >> P.x;
	cout << "Nhap y ";
	cin >> P.y;
	cout << "Nhap z ";
	cin >> P.z;

}
void Nhap(HINHCAU& c) 
{
	cout << "Nhap tam I " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh ";
	cin >> c.R;
}

float TheTich(HINHCAU c)
{
	return (float)4 / 3 * 3.14 * c.R * c.R * c.R;
}