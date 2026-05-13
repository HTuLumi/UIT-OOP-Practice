#include "cNgay.h"
#include <iostream>
using namespace std;

//Ham tra ve ngay Max trong thang
int cNgay::SoNgayTrongThang(int m, int y)
{
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            return 29;
        return 28;
    default:
        return 0;
    }
}

//Ham check hop le
bool cNgay::KiemTraHopLe(int d, int m, int y)
{
    if (y < 0) return false;
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > SoNgayTrongThang(m, y)) return false;
    return true;
}


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
    if (KiemTraHopLe(d, m, y)) {
        ngay = d; thang = m; nam = y;
    } else {
        cout << "[Canh bao] Ngay truyen vao khong hop le. Tu dong gan ve 1/1/2000!\n";
        ngay = 1; thang = 1; nam = 2000;
    }
}


//ham xuat
void cNgay::Xuat()
{
    cout << ngay << "/" << thang << "/" << nam;
}

void cNgay::Nhap() {
    int d, m, y;
    do {
        cout << "Nhap ngay, thang, nam (cach nhau khoang trang): ";
        cin >> d >> m >> y;

        if (!KiemTraHopLe(d, m, y)) {
            cout << "Loi: Ngay thang nam khong hop le! Vui long nhap lai.\n";
        }
    } while (!KiemTraHopLe(d, m, y));
    // Vòng lặp sẽ tiếp tục CHỪNG NÀO ngày nhập vào CÒN SAI (!true = false)

    // Chỉ khi dữ liệu đúng 100% mới cho phép cập nhật vào thuộc tính private của đối tượng
    ngay = d; thang = m; nam = y;
}

    cout << "Nam: ";
    cin >> nam;
}
