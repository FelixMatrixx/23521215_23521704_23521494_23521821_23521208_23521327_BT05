#include <iostream>
using namespace std;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int ktSongSong(DUONGTHANG, DUONGTHANG);
int main()
{
	DUONGTHANG d1, d2;
	cout << "Nhap d1:\n";
	Nhap(d1);
	Xuat(d1);
	cout << "\nNhap d2:\n";
	Nhap(d2);
	Xuat(d2);
	if (ktSongSong(d1, d2) == 1)
		cout << "\nSong song";
	else
		cout << "\nKhong song song";
	return 0;
}
void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}
void Xuat(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c;
}
int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b- d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}