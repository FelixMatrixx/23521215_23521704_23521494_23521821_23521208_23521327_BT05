#include <iostream>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(TAMGIAC&);
void Nhap(DIEM&);
DIEM TungNhoNhat(TAMGIAC);

int main()
{
	TAMGIAC T;
	Nhap(T);
	float ss = TungNhoNhat(T).y;
	if (T.A.y == ss)
		cout << "Dinh A co tung do nho nhat: " << ss;
	else if (T.B.y == ss)
		cout << "Dinh B co tung do nho nhat: " << ss;
	else if (T.C.y == ss)
		cout << "Dinh C co tung do nho nhat: " << ss;
	return 1;
}

void Nhap(DIEM& D)
{
	cout << "Nhap toa do x:";
	cin >> D.x;
	cout << "Nhap toa do y:";
	cin >> D.y;
}
void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A\n";
	Nhap(t.A);
	cout << "Nhap dinh B\n";
	Nhap(t.B);
	cout << "Nhap dinh C\n";
	Nhap(t.C);
}
DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if (t.C.y < lc.y)
		lc = t.C;
	return lc;
}