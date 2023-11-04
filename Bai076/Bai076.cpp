#include <iostream>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

int UCLN(int, int);
void RutGon(HONSO&);
HONSO Hieu(HONSO x, HONSO y);

int main()
{
	HONSO A,B;

}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}