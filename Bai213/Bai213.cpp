#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
int ktCat(DUONGTHANG, DUONGTHANG);
DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
int ktDongQui(DUONGTHANG[], int);
int main()
{
	DUONGTHANG d[20];
	int n;
	Nhap(d, n);
	int kt = ktDongQui(d, n);
	cout << kt;
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
void Nhap(DUONGTHANG d[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang thu " << i + 1 << ": \n";
		Nhap(d[i]);
	}
}
int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}
DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	DIEM gd;
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = d1.c * d2.b - d2.c * d1.b;
	float Dy = d1.a * d2.c - d2.a * d1.c;
	gd.x = Dx / D;
	gd.y = Dy / D;
	return gd;
}
int ktDongQui(DUONGTHANG d[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n-1; j++)
		{
			if (ktCat(d[i], d[j]) == 0)
				continue;
			else
			{
				DIEM gd1 = GiaoDiem(d[i], d[j]);
				for (int k = j + 1; k < n; k++)
				{
					if (ktCat(d[j], d[k]) == 0)
						continue;
					else
					{
						DIEM gd2 = GiaoDiem(d[j], d[k]);
						if (gd1.x == gd2.x && gd1.y == gd2.y)
							return 1;
					}
				}
			}
		}
	return 0;
}