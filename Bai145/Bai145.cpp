//Which type of the triagngle

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdbool>

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
int DangTamGiac(TAMGIAC);

int main()
{
    TAMGIAC t1;
    cout << "Nhap tam giac: ";
    Nhap(t1);
    Xuat(t1);
    int kt = DangTamGiac(t1);
    cout << kt;
    switch (kt)
    {
    case 0:
    {
        cout << "Khong la tam giac";
        break;
    }
    case 1:
    {
        cout << "Tam giac Deu";
        break;
    }
    case 2:
    {
        cout << "Tam giac vuong can";
        break;
    }
    case 3:
    {
        cout << "Tam giac vuong";
        break;
    }
    case 4:
    {
        cout << "Tam giac can";
        break;
    }
    case 5:
    {
        cout << "Tam giac thuong";
        break;
    }
    default:
        break;

    }
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

int DangTamGiac(TAMGIAC t)
{
    float a = KhoangCach(t.B, t.C);
    float b = KhoangCach(t.A, t.C);
    float c = KhoangCach(t.A, t.B);

    if (!((a + b > c) && (a + c > b) && (b + c > a)))
        return 0;
    if (a == b && b == c)
        return 1;
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        if (a == b || a == c || b == c)
            return 2;
        return 3;
    }
    if (a == b || a == c || b == c)
        return 4;
    return 5;
}