#include <iostream>

using namespace std;

int main(){

    int tahun;

    cout << "Masukan tahun: ";
    cin >> tahun;

    if (tahun%400 == 0){
        cout << "Merupakan tahun kabisat " << tahun;
    }else if (tahun%100 == 0){
        cout <<  "Bukan tahun kabisat " << tahun;
    }else if (tahun%4 == 0){
        cout << "Merupakan tahun kabisat " << tahun;
    }else{
        cout << "Bukan tahun kabisat ";
    }





    return 0;
}
