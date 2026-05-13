#ifndef PHANSO_H
#define PHANSO_H

class PhanSo
{
    public:
        PhanSo();
        PhanSo(int t, int m);

        void nhap();
        void xuat();
        PhanSo tong(PhanSo PSkhac);
    protected:

    private:
        int tuSo;
        int mauSo;
        bool isValid(int m);
        int timUCLN(int t, int m);
        void RutGon();
};

#endif // PHANSO_H
