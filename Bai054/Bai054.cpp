#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Phanso
{
	int tu;
	int mau;
};
typedef struct Phanso PHANSO;
void Nhap(PHANSO&);
bool Ktraduong(PHANSO);
int main()
{
	PHANSO A;
	cout << "Nhap phan so  " << endl;
	Nhap(A);
	if (Ktraduong(A))
		cout << "Phan so duong ";
	else
		cout << "Khong phai phan so duong ";
	return 0;

}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu ";
	cin >> x.tu;
	cout << "Nhap mau ";
	cin >> x.mau;
}

bool Ktraduong(PHANSO x)
{
	if (x.tu * x.mau > 0)
		return true;
	return false;
}
