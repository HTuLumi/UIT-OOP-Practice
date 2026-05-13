#include "cNgay.h"
#include <iostream>
using namespace std;
//Ham khoi tao mac dinh
cNgay::cNgay()
{
    ngay = 1;
    thang = 1;
    nam = 2000;
}

//Ham khoi tao co tham so
cNgay::cNgay(int d, int m, int y)
{
    ngay = d;
    thang = m;
    nam = y;
}

//ham xuat
void cNgay::Xuat()
{
    cout << ngay << "/" << thang << "/" << nam;
}

void cNgay::Nhap()
{
    cout <<"Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;
}
