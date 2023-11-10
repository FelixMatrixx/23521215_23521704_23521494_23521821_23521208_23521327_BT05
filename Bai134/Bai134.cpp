#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef DiemKhongGian DIEMKHONGGIAN;
struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef HinhCau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
int TuongDoi(HINHCAU, HINHCAU);
void ViTriTuongDoi(HINHCAU, HINHCAU);
int main()
{
	HINHCAU C1, C2;
	Nhap(C1);
	Xuat(C1);
	Nhap(C2);
	Xuat(C2);
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
	cout << "I(" << P.x << "," << P.y << "," << P.z << ")";
}
void Nhap(HINHCAU& C)
{
	cout << "Nhap tam : " << endl;
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}
void Xuat(HINHCAU C)
{
	Xuat(C.I);
	cout << endl;
	cout << "R= " << C.R;
}
float KhoangCach(DIEMKHONGGIAN A, DIEMKHONGGIAN B)
{
	float kc = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2) + pow(B.z - A.z, 2));
	return kc;
}
int TuongDoi(HINHCAU C1, HINHCAU C2)
{
	float kcTam = KhoangCach(C1.I, C2.I);
	if (kcTam == 0 && C1.R == C2.R)
		return 0;
	if (kcTam > C1.R + C2.R)
		return 1;
	if (kcTam == C1.R + C2.R)
		return 2;
	if (kcTam > abs(C1.R - C2.R)&&kcTam<C1.R+C2.R)
		return 3;
	if (kcTam == abs(C1.R - C2.R))
		return 4;
	return 5;
}
void ViTriTuongDoi(HINHCAU C1, HINHCAU C2)
{
	int kq = TuongDoi(C1, C2);
	switch (kq)
	{
	case 0:
		cout << "Trung nhau";
		break;
	case 1:
		cout << "Roi nhau";
		break;
	case 2:
		cout << "Tiep xuc ngoai";
		break;
	case 3:
		cout << "Cat nhau";
		break;
	case 4:
		cout << "Tiep xuc trong";
		break;
	case 5:
		cout << "Chua trong nhau";
		break;
	}
}