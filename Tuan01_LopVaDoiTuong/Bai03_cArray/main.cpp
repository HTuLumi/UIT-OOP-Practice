#include "cArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // Reset mầm số ngẫu nhiên

    cout << "=== CHUONG TRINH QUAN LY MANG DONG ===" << endl;
    cArray mang; // Sử dụng hàm tạo mặc định (arr = NULL, n = 0)

    // 1. Test nhập xuất ngẫu nhiên
    mang.nhapDayNgauNhien();
    mang.xuat();

    // 2. Test đếm số lần xuất hiện
    int soCanDem;
    cout << "\nNhap so ban muon dem xem xuat hien bao nhieu lan: ";
    cin >> soCanDem;
    cout << "So " << soCanDem << " xuat hien " << mang.DemSoLanXuatHien(soCanDem) << " lan." << endl;

    // 3. Test kiểm tra mảng tăng dần
    if (mang.kiemtraTangDan()) {
        cout << "=> Mang hien tai DANG sap xep tang dan." << endl;
    } else {
        cout << "=> Mang hien tai KHONG sap xep tang dan." << endl;
    }

    // 4. Test tìm số lẻ nhỏ nhất
    int leMin = mang.timSoLeMin();
    // Chỗ này giả định nếu trả về 0 (số chẵn) tức là không có số lẻ nào
    if (leMin % 2 == 0) {
        cout << "=> Mang khong co so le nao!" << endl;
    } else {
        cout << "=> So le nho nhat trong mang la: " << leMin << endl;
    }

    // 5. Test tính năng sắp xếp
    cout << "\nDang tien hanh sap xep tang dan..." << endl;
    mang.sapxepTangDang(); // Gọi hàm theo đúng tên bạn đã đặt
    mang.xuat();

    // Kiểm tra lại sau khi sắp xếp
    if (mang.kiemtraTangDan()) {
        cout << "=> Kiem tra lai: Mang da duoc sap xep THANG CONG!" << endl;
    }

    return 0;
}
