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

void Nhap(NGAY[], int&);

int ktNhuan(NGAY);

int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);

int ktHopLe(NGAY);

int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);

void HaiNgayXaNhat(NGAY[], int, NGAY&, NGAY&);

int main()
{
    NGAY b[100];
    int k;
    NGAY m, n;
    Nhap(b, k);
    HaiNgayXaNhat(b, k, m, n);
    cout << "\nNgay 1:";
    Xuat(m);
    cout << "\nNgay 2: ";
    Xuat(n);
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

void Nhap(NGAY a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        Nhap(a[i]);
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

int SoNgayToiDaTrongNam(NGAY x)
{
    if (ktNhuan(x) == 1)
        return 366;
    return 365;
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

int SoThuTuTrongNam(NGAY x)
{
    int stt = 0;
    for (int i = 1; i < x.Thang; i++)
    {
        NGAY temp = { 1, i, x.Nam };
        stt += SoNgayToiDaTrongThang(temp);
    }
    return stt + x.Ngay;
}

int SoThuTu(NGAY x)
{
    int stt = 0;
    for (int i = 1; i < x.Nam; i++)
    {
        NGAY temp = { 1, 1, i };
        stt += SoNgayToiDaTrongNam(temp);
    }
    return stt + SoThuTuTrongNam(x);
}

void HaiNgayXaNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
    int temp = 0;
    int max = SoThuTu(a[0]) - SoThuTu(a[1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = abs(SoThuTu(a[i]) - SoThuTu(a[j]));
            if (temp > max)
            {
                max = temp;
                x = a[i];
                y = a[j];
            }
        }
    }
}