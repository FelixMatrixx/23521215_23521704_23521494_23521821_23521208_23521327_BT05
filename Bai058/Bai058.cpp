#include <iostream>

using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};

typedef struct phanso PHANSO;

void Nhap(PHANSO&);
int SoSanh(PHANSO, PHANSO);

int main()
{
	PHANSO A, B;
	Nhap(A);
	Nhap(B);
	int kt = SoSanh(A, B);
	if (kt == 1)
		cout << "Phan so thu nhat lon hon phan so thu 2.";
	else if (kt == 0)
		cout << "Phan so thu nhat bang phan so thu 2.";
	else if (kt == -1)
		cout << "Phan so thu nhat nho hon phan so thu 2.";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
	    return -1;
	return 0;
}