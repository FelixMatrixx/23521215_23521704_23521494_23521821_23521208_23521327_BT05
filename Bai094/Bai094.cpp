#include <iostream>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
int ktNhuan(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	ktNhuan(x);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
    cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}