#include<iostream>

using namespace std;
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
DIEM TrongTam(TAMGIAC);
void Xuat(DIEM);
int main()
{
	TAMGIAC c;
	Nhap(c);
	DIEM I = TrongTam(c);
	cout << "Trong tam tam giac la:\n";
	Xuat(I);
	return 0;
}
void Nhap(DIEM& I)
{
	cout << "Nhap hoanh do: ";
	cin >> I.x;
	cout << "Nhap tung do: ";
	cin >> I.y;
}
void Nhap(TAMGIAC& c)
{
	cout << "Nhap diem A:\n";
	Nhap(c.A);
	cout << "Nhap diem B:\n";
	Nhap(c.B);
	cout << "Nhap diem C:\n";
	Nhap(c.C);
}
DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}
void Xuat(DIEM I)
{
	cout << "Tung do: " << I.x << endl;
	cout << "Hoanh do: " << I.y << endl;
}