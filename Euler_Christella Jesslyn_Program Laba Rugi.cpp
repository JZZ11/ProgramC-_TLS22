// Program untuk menghitung pendapatan laba atau rugi

#include <iostream>

using namespace std;

int main()
{
    float modal, pendapatan, laba, rugi;

    cout << "=============================" << endl;
    cout << "Masukkan jumlah modal : " << endl;
    cin >> modal;
    cout << "Masukkan jumlah pendapatan :" << endl;
    cin >> pendapatan;
    cout << "=============================" << endl;

    if (pendapatan > modal)
    {
        laba = pendapatan - modal;
        cout << "Laba yang diperoleh adalah sebesar :" << laba << endl;
    }
    else if (pendapatan < modal)
    {
        rugi = pendapatan - modal;
        cout << "Rugi yang diperoleh adalah sebesar :" << rugi << endl;
    }
    else
    {
        cout << "Tidak terdapat laba maupun rugi" << endl;
    }
    return 0;
}