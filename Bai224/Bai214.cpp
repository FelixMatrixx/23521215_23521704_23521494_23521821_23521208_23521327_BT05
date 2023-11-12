#include <iostream>
using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;
struct DuongTron
{
	DIEM I;
	float R;
};
typedef DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DIEM[][50], int&, int&);
void Xuat(DIEM[][50], int, int);

float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON C, DIEM P);
int DemDiem(DIEM [][50], int, int, DUONGTRON);
int main()
{
	DIEM a[50][50];
	int m, n;
	DUONGTRON C;
	cout << "Nhap ma tran\n";
	Nhap(a, m, n);
	cout << "Nhap duong tron\n";
	Nhap(C);
	Xuat(C);
	cout << DemDiem(a, m, n, C);
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
	cout << endl;
}
void Nhap(DUONGTRON& C)
{
	cout << "Nhap tam I:\n";
	Nhap(C.I);
	cout << "Nhap R: ";
	cin >> C.R;
}
void Xuat(DUONGTRON C)
{
	cout << "Tam I: ";
	Xuat(C.I);
	cout << "Ban kinh R= ";
	cout << C.R;
	cout << endl;
}
void Nhap(DIEM a[][50], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]\n";
			Nhap(a[i][j]);
		}
}
void Xuat(DIEM a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]";
			Xuat(a[i][j]);

		}
		cout << endl;
	}
}
float KhoangCach(DIEM M, DIEM N)
{
	float kc = sqrt((M.x - N.x) * (M.x - N.x) + (M.y - N.y) * (M.y - N.y));
	return kc;
}
int ktThuoc(DUONGTRON C, DIEM P)
{
	float kc = KhoangCach(C.I, P);
	if (kc <= C.R)
		return 1;
	return 0;

}
int DemDiem(DIEM a[][50], int m, int n, DUONGTRON C)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(C, a[i][j]) == 1)
				dem++;
	return dem;

}