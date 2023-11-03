#include <iostream>

using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

 struct hinhcau
 {
	 DIEMKHONGGIAN I;
	 float R;
 };
typedef struct hinhcau HINHCAU;

void Nhap(HINHCAU&);
void Nhap(DIEMKHONGGIAN&);
float DienTich(HINHCAU);

int main()
{
	HINHCAU C;
	Nhap(C);
	cout << "Dien tich hinh cau: " << DienTich(C);
	return 0;
}

void Nhap(DIEMKHONGGIAN& I)
{
	cout << "Nhap toa do tam\nx: ";
	cin >> I.x;
	cout << "y: ";
	cin >> I.y;
	cout << "z: ";
	cin >> I.z;

}
void Nhap(HINHCAU& c)
{
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
float DienTich(HINHCAU c)
{
	return float(4 * 3.14 * c.R * c.R);
}