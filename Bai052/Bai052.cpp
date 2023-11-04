#include <iostream>

using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};

typedef struct phanso PHANSO;

void Nhap(PHANSO&);
int ktCoNghia(PHANSO);

int main()
{
	PHANSO A;
	Nhap(A);
	int kt = ktCoNghia(A);
	if (kt == 1)
		cout << "Phan so co nghia.";
	else
		cout << "Phan so khong co nghia.";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

int ktCoNghia(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return 0;
}