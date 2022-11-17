#include <iostream>

using namespace std;

int main(){

    string username, password;

    cout << "Masukan username kamu beb: ";
    cin >> username;

    cout << "Masukan password kamu beb: ";
    cin >> password;

    if (username=="admin"){
        if (password=="admin123"){
            cout << "Username dan password kamu benerrr!!";
        }else{
            cout << "Username sesuai, password nya ga sesusai";
        }
    }else{
        if (password!="admin123"){
        cout << "Username dan password kamu ga sesuai beb";
        }else{
        cout << "Username ga sesuai, password sesuai";
        }
    }






    return 0;
}
