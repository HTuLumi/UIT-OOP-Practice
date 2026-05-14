#include "cArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;


cArray::cArray()
{
    n = 0;
    arr = NULL;
}

cArray::cArray(int size)
{
    n = size;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0; //Khoi tao mac dinh
    }
}

cArray::~cArray()
{
    delete [] arr;
    arr = NULL;
}

void cArray::nhapDay()
{
    cout <<"Nhap n: ";
    cin >> n;
    if (arr != NULL)
        delete [] arr;
    arr = new int[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void cArray::xuat()
{
    cout << "Xuat day da nhap: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void cArray::nhapDayNgauNhien()
{
    cout << "Nhap n: ";
    cin >> n;
    if (arr != NULL)
    delete [] arr;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 100) - 50;
    }
}

int cArray::DemSoLanXuatHien(int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}

bool cArray::kiemtraTangDan()
{
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i-1])
            return false;
    return true;
}

int cArray::timSoLeMin()
{
    int min = 0;
    for (int i =0; i < n; i++)
        if (arr[i] % 2 != 0)
    {
        min = arr[i];
        break;
    }
    for (int i = 0; i < n; i++)
        if (arr[i] < min && arr[i] % 2 != 0)
            min = arr[i];
    return min;
}

void cArray::sapxepTangDang()
{
    for (int i = 0 ; i < n - 1 ; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
