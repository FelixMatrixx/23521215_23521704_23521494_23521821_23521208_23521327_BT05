#include <iostream>

using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&, DATHUC&);
DATHUC Hieu(DATHUC, DATHUC);

int main()
{
	DATHUC F, G;
	Nhap(F, G);
	for (int i = F.n; i >= 0; i--)
	{
		cout << "\nHe so a[" << i << "]: ";
		cout << Hieu(F, G).a[i];
	}
	return 0;
}

void Nhap(DATHUC& f, DATHUC& g)
{
	cout << "Nhap bac da thuc F: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
	cout << "Nhap bac da thuc G: ";
	cin >> g.n;
	for (int i = g.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> g.a[i];
	}
}
DATHUC Hieu(DATHUC f, DATHUC g)
{
	DATHUC temp = f;
	for (int i = f.n; i >= 0; i--)
		for (int j = g.n; j >= 0; j--)
		{
			if (i == j)
				temp.a[i] = f.a[i] - g.a[j];
		}
	return temp;
}