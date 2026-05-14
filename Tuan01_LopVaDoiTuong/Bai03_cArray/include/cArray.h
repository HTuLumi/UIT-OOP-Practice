#ifndef CARRAY_H
#define CARRAY_H


class cArray
{
    public:
        cArray();
        cArray(int size);
        ~cArray();

        void nhapDay();
        void xuat();
        void nhapDayNgauNhien();
        int DemSoLanXuatHien(int x);
        bool kiemtraTangDan();
        int timSoLeMin();
        void sapxepTangDang();

    protected:

    private:
        int n;
        int* arr;
};

#endif // CARRAY_H
