#include <iostream>

using namespace std;

int main(){


    int kode, jumlah, harga;
    string ukuran;


    cout << "|----------------------------------------------------------|"<< endl;
    cout << "|Kode Susu     |Nama Produk        |Ukuran     |Harga      |"<< endl;
    cout << "|----------------------------------------------------------|"<< endl;
    cout << "|1             |Dancow             |B = Besar  |Rp.10.000- |"<< endl;
    cout << "|              |                   |S = Sedang |Rp.4.250-  |"<< endl;
    cout << "|              |                   |K = Kecil  |Rp.2.100-  |"<< endl;
    cout << "|----------------------------------------------------------|"<< endl;
    cout << "|2             |Indomilk           |B = Besar  |Rp.8.500-  |"<< endl;
    cout << "|              |                   |S = Sedang |Rp.4.000-  |"<< endl;
    cout << "|              |                   |K = Kecil  |Rp.2.025-  |"<< endl;
    cout << "|----------------------------------------------------------|"<< endl;
    cout << "|3             |Sustacal           |B = Besar  |Rp.17.000- |"<< endl;
    cout << "|              |                   |S = Sedang |Rp.14.000- |"<< endl;
    cout << "|              |                   |K = Kecil  |Rp.8.300-  |"<< endl;
    cout << "|----------------------------------------------------------|"<< endl;

    cout << "Masukan Kode Susu (1-3): ";
    cin >> kode;

    cout << "Masukan Jumlah Pembelian: ";
    cin >> jumlah;

    cout << "Masukan Ukuran(B/S/K): ";
    cin >> ukuran;

    if(kode == 1){
        if(ukuran == "B"){
            cout << "Harga Susu: " << 10000*jumlah << endl;
        }else if (ukuran == "S"){
            cout << "Harga Susu: " << 4250*jumlah << endl;
        }else if (ukuran == "K"){
            cout << "Harga Susu: " << 2100*jumlah << endl;
        }
    }else if (kode == 2){
        if(ukuran == "B"){
            cout << "Harga Susu: " << 8500*jumlah << endl;
        }else if (ukuran == "S"){
            cout << "Harga Susu: " << 4000*jumlah << endl;
        }else if (ukuran == "K"){
            cout << "Harga Susu: " << 2025*jumlah << endl;
        }
    }else if (kode == 3){
        if(ukuran == "B"){
            cout << "Harga Susu: " << 17000*jumlah << endl;
        }else if (ukuran == "S"){
            cout << "Harga Susu: " << 14000*jumlah << endl;
        }else if (ukuran == "K"){
            cout << "Harga Susu: " << 8300*jumlah << endl;
        }
    }else {
        cout << "Kode yang anda masukan salah" << endl;
    }




return 0;

}
