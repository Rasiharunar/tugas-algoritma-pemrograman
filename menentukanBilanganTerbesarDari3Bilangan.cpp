#include <iostream>


using namespace std;

int main(){
    int a, b, c;
    cout << "Masukkan bilangan pertama : "<< endl;
    cin >> a;
    cout << "Masukkan bilangan kedua : "<< endl;
    cin >> b;
    cout << "Masukkan bilangan ketiga : "<< endl;
    cin >> c;

    cout << "Bilangan terbesar adalah :  "   << endl;
    
    if (a>b && a>c){
        printf("bilangan pertama\n");
    }
    else if (b>a && b>c)
    {
        printf("bilangan kedua\n");
    }
    else if (c>a && c>b){
        printf("bilangan ketiga\n");
    }
    else{
        printf("Kesalahan Input Nilai / 3 input memiliki nilai yang sama");
    }
    return 0;
}