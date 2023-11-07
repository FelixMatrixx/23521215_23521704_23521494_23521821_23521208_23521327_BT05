#include <iostream>
#include <iomanip>

using namespace std;

struct Ngay
{
    int Ngay;
    int Thang;
    int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

int ktNhuan(NGAY);

int SoNgayToiDaTrongThang(NGAY);

int ktHopLe(NGAY);

int main()
{
    NGAY d1;
    Nhap(d1);
    Xuat(d1);
    if (ktHopLe(d1))
        cout << "\nNgay hop le.";
    else
        cout << "\nNgay khong hop le.";
    return 0;
}

void Nhap(NGAY& x)
{
    cout << "\nNhap ngay: ";
    cin >> x.Ngay;
    cout << "Nhap thang: ";
    cin >> x.Thang;
    cout << "Nhap nam: ";
    cin >> x.Nam;
}

void Xuat(NGAY x)
{
    cout << "\nNgay = " << x.Ngay;
    cout << "\nThang = " << x.Thang;
    cout << "\nNam = " << x.Nam;
}

int ktNhuan(NGAY x)
{
    if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
        return 1;
    if (x.Nam % 400 == 0)
        return 1;
    return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
    int Thang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (ktNhuan(x) == 1)
        Thang[2 - 1] = 29;
    return Thang[x.Thang - 1];
}

int ktHopLe(NGAY x)
{
    if (!(x.Nam >= 1))
        return 0;
    if (!(x.Thang >= 1 && x.Thang <= 12))
        return 0;
    if (!(x.Ngay >= 1 && x.Ngay <= SoNgayToiDaTrongThang(x)))
        return 0;
    return 1;
}
