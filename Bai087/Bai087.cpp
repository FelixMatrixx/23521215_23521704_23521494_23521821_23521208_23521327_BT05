#include<iostream>
#include<iomanip>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
THOIGIAN TruocDo(THOIGIAN);
void Xuat(THOIGIAN);
int main()
{
	THOIGIAN x;
	Nhap(x);
	THOIGIAN kq = TruocDo(x);
	Xuat(kq);
	return 0;
}
void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
THOIGIAN TruocDo(THOIGIAN x)
{
	THOIGIAN temp = x;
	temp.Giay--;
	if (temp.Giay < 0)
	{
		temp.Phut--;
		if (temp.Phut < 0)
		{
			temp.Gio--;
			if (temp.Gio < 0)
				temp.Gio = 23;
			temp.Phut = 59;
		}
		temp.Giay = 59;
	}
	return temp;
}
void Xuat(THOIGIAN x)
{
	cout << endl;
	cout << setw(2) << setfill('0') << x.Gio << ":";
	cout << setw(2) << setfill('0') << x.Phut << ":";
	cout << setw(2) << setfill('0') << x.Giay;
}