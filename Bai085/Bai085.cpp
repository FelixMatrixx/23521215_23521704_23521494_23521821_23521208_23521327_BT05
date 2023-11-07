#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct ThoiGian
{
    int Gio;
    int Phut;
    int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

int ktHopLe(THOIGIAN);

int main()
{
    THOIGIAN t1;
    cout << "Nhap thoi gian: ";
    Nhap(t1);
    Xuat(t1);
    if (ktHopLe(t1) == 1)
        cout << "Thoi gian hop le";
    else
        cout << "Thoi gian khong hop le";
    return 0;
}

void Nhap(THOIGIAN& x)
{
    cout << "\nNhap gio: ";
    cin >> x.Gio;
    cout << "Nhap phut: ";
    cin >> x.Phut;
    cout << "Nhap giay: ";
    cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
    cout << "\nGio = " << x.Gio;
    cout << "\nPhut = " << x.Phut;
    cout << "\nGiay = " << x.Giay;
}

int ktHopLe(THOIGIAN x)
{
    if (!(x.Gio >= 0 && x.Gio <= 23))
        return 0;
    if (!(x.Phut >= 0 && x.Phut <= 59))
        return 0;
    if (!(x.Giay >= 0 && x.Giay <= 59))
        return 0;
    return 1;
}
