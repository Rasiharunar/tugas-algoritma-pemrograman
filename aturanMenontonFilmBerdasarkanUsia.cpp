#include <iostream>

using namespace std;

int main(){
    int umur;

    cout << "Berapa Umur Anda? " << endl;
    cin >> umur;

    if (umur > 17){
        cout << "Anda Boleh Menonton." <<endl;
    }else{
        cout << "Mohon Maaf Anda Tidak Boleh Menonton." << endl;
    }
    return 0;
}