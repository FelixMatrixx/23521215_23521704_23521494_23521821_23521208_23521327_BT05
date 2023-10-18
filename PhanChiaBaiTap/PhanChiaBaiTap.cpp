#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_BAI_TAP 239 

void InBaiTap(int);
int main()
{
	// Ma so bai tap = ket qua cua mod 6
	int n;
	cout << "Nhap ma so bai tap: ";
	cin >> n;
	InBaiTap(n);
	return 0;
}
void InBaiTap(int nn)
{
	int dem = 0;

	cout << "Bai tap can phai lam la: ";
	for (int i = 1; i <= MAX_BAI_TAP; i++)
	{
		if (i % 6 == nn)
		{
			dem++;
			cout << setw(10) << i;
		}
	}
	cout << "\nTong so bai tap ban phai lam: " << dem;
}