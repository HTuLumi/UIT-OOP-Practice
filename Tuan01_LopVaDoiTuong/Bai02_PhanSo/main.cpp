#include "PhanSo.h"
#include <iostream>

using namespace std;

int main() {
    // 1. Kiểm tra hàm tạo mặc định
    cout << "1. Khoi tao phan so mac dinh: ";
    PhanSo ps1;
    ps1.xuat();
    cout << endl;

    // 2. Kiểm tra hàm tạo có tham số + Tự động rút gọn
    // Ví dụ: 6/10 phải rút gọn thành 3/5
    cout << "2. Khoi tao phan so 6/10 (Tu dong rut gon): ";
    PhanSo ps2(6, 10);
    ps2.xuat();
    cout << endl;

    // 3. Kiểm tra xử lý dấu trừ ở mẫu
    // Ví dụ: 1/-2 phải thành -1/2
    cout << "3. Khoi tao phan so 1/-2 (Dua dau tru len tu): ";
    PhanSo ps3(1, -2);
    ps3.xuat();
    cout << endl;

    // 4. Kiểm tra chặn lỗi mẫu số bằng 0 lúc khởi tạo
    cout << "4. Khoi tao phan so 5/0: " << endl;
    PhanSo ps4(5, 0);
    cout << "Ket qua sau khi xu ly loi: ";
    ps4.xuat();
    cout << endl << endl;

    // 5. Kiểm tra hàm nhập (có vòng lặp chặn lỗi mẫu = 0)
    cout << "5. Test ham nhap phan so: " << endl;
    PhanSo ps5;
    ps5.nhap();
    cout << "Phan so vua nhap (da rut gon): ";
    ps5.xuat();
    cout << endl;

    cout << "\n--- TEST HAM CONG HAI PHAN SO ---" << endl;
    PhanSo psA(1, 4); // 1/4
    PhanSo psB(1, 6); // 1/6

    cout << "Phan so A: "; psA.xuat(); cout << endl;
    cout << "Phan so B: "; psB.xuat(); cout << endl;

    // psA gọi hàm Cong, truyền psB vào, và gán kết quả cho psTong
    PhanSo psTong = psA.tong(psB);

    cout << "Tong A + B = ";
    psTong.xuat();
    cout << endl; // Kết quả mong đợi: 5/12

    return 0;
}
