#include <iostream>

using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);

int main()
{
	SOPHUC A;
	Nhap(A);
	return 0;
}

void Nhap(SOPHUC& x)
{
		cout << "Nhap phan thuc: ";
		cin >> x.Thuc;
		cout << "Nhap phan ao: ";
		cin >> x.Ao;
}