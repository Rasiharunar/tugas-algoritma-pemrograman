#include <iostream>


using namespace std;

int main(){
    int a;

    cout << "Masukan sebuah bilangan : " << endl;
    cin >> a;

    if (a%2==0){
        cout << "Genap" << endl;
    }
    else
    {
        cout << "Ganjil" << endl;
    }
    return 0;
}