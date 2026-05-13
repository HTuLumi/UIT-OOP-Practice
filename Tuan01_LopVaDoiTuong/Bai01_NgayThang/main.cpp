#include "cNgay.h"
#include <iostream>
using namespace std;

int main() {
    // Tạo đối tượng bằng hàm tạo mặc định
    cNgay ngayMacDinh;
    cout << "Ngay mac dinh: ";
    ngayMacDinh.Xuat(); cout << endl;

    // Tạo đối tượng bằng hàm tạo có tham số
    cNgay ngaySinhBietTruoc(13, 7, 2007);
    cout << "Ngay sinh: ";
    ngaySinhBietTruoc.Xuat(); cout << endl;

    // Nhập từ bàn phím
    cNgay ngayBatKy;
    ngayBatKy.Nhap();
    cout << "Ngay vua nhap: ";
    ngayBatKy.Xuat(); cout << endl;

    return 0;
}
