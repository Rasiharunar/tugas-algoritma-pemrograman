#include <iostream>

using namespace std;

int main()
{
    int count, i;
    cout << "masukan n : " << endl;
    cin >> count;
    if(count %2==0){
        for (i = 0; i <= count; i++)
        {
            if (i % 2 == 0 && i != 0)
            {
                cout << i ;
                
            }else{
                cout << ", ";
            }
        cout <<i;
        }
    }else{
        printf("Mohon Masukkan bilangan genap");
    }
    return 0;
}
