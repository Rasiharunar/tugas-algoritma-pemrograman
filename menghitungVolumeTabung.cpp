#include <iostream>


using namespace std;

int main(){
    
    double phi = 3.14, v;
    int r, t;

    cout << "Masukkan nilai jari-jari tabung : " << endl;
    cin >> r;
    cout << "Masukkan nilai tinggi tabung : " << endl;
    cin >> t;
    
    v = phi * (r*r) * t;

    cout << "Volume tabung : " << v <<endl;
}