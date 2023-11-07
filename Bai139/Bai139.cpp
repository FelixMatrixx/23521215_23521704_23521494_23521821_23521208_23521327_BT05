#include <iostream>
#include <cmath>
#include <iomanip>
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
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

float KhoangCach(DIEM, DIEM);

int KiemTra(TAMGIAC);

int main()
{
    TAMGIAC t1;
    cout << "Nhap tam giac: ";
    Nhap(t1);
    Xuat(t1);
    if (KiemTra(t1) == 1)
        cout << "\nLa tam giac.";
    else
        cout << "\nKhong la tam giac.";

    return 0;
}

void Nhap(DIEM& P)
{
    cout << "\nNhap x: ";
    cin >> P.x;
    cout << "Nhap y: ";
    cin >> P.y;
}

void Xuat(DIEM P)
{
    cout << "\nx = " << P.x;
    cout << "\ny = " << P.y;
}

void Nhap(TAMGIAC& t)
{
    cout << "\nNhap A: ";
    Nhap(t.A);
    cout << "\nNhap B: ";
    Nhap(t.B);
    cout << "\nNhap C: ";
    Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
    cout << "\nA: ";
    Xuat(t.A);
    cout << "\nB: ";
    Xuat(t.B);
    cout << "\nC: ";
    Xuat(t.C);

}

float KhoangCach(DIEM P, DIEM Q)
{
    return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int KiemTra(TAMGIAC t)
{
    float a = KhoangCach(t.B, t.C);
    float b = KhoangCach(t.A, t.C);
    float c = KhoangCach(t.A, t.B);
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    return 0;
}