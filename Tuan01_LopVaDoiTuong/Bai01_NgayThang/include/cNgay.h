#ifndef CNGAY_H
#define CNGAY_H


class cNgay
{
    public:
        cNgay();
        cNgay(int d, int m, int y);

        void Nhap();
        void Xuat();

    protected:

    private:
        int ngay, thang, nam;
        int SoNgayTrongThang(int m, int y);
        bool KiemTraHopLe(int d, int m, int y);

};

#endif // CNGAY_H
