#include <iostream>
#include <iomanip>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
int ktSongSong(DUONGTHANG, DUONGTHANG);
int ktSongSong(DUONGTHANG[], int);

int main()
{
	DUONGTHANG d[100];
	int n;
	Nhap(d, n);
	cout << "Cac duong thang nay co song song voi nhau: ";
	cout << ktSongSong(d, n);
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

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}

int ktSongSong(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
		if (!ktSongSong(a[i], a[0]))
			return 0;
	return 1;
}