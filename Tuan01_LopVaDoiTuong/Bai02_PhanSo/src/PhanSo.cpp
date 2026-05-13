#include "PhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

PhanSo::PhanSo()
{
    tuSo = 0;
    mauSo = 1;
}

bool PhanSo::isValid(int m)
{
    if (m == 0) return false;
    return true;
}

int PhanSo::timUCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


void PhanSo::RutGon()
{
    int UCLN = timUCLN(tuSo, mauSo);
    tuSo = tuSo/UCLN;
    mauSo = mauSo/UCLN;
    if (mauSo < 0) {
        mauSo = abs(mauSo);
        tuSo = -tuSo;
    }
}

PhanSo::PhanSo(int t, int m)
{
    tuSo = t;
    mauSo = m;
    if (!isValid(m))
    {
        cout << "Loi nhap mau so, gan mau so = 1 mac dinh! \n";
        mauSo = 1;
    }
}

void PhanSo::nhap()
{
    cout << "Vui long nhap phan so: \n";
    do {
        cin >> tuSo >> mauSo;
        if (!isValid(mauSo))
            cout << "Nhap sai quy dinh, vui long nhap lai: ";
    } while(!isValid(mauSo));
}

void PhanSo::xuat()
{
    RutGon();
    cout << tuSo << "/" << mauSo;

}

PhanSo PhanSo::tong(PhanSo PSKhac)
{
    PhanSo sumPS;
    sumPS.mauSo = mauSo*PSKhac.mauSo;
    sumPS.tuSo = tuSo*PSKhac.mauSo + mauSo*PSKhac.tuSo;

    return sumPS;
}


