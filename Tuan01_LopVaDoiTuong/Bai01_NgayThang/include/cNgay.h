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

};

#endif // CNGAY_H
