#include <iostream>

using namespace std;

int main(){
    int a = 2, b = 3, c = 1;

    if (a<b && a<c){
        printf("a terkecil\n");
        if (b>c){
            printf("b terbesar\n");
        }else{
            printf("c terbesar\n");
        }
    }
    else if (b<a && b<c )
    {
        printf("b terkecil\n");
        if (a>c){
            printf("a terbesar\n");
        }else{
            printf("c terbesar\n");
        }
    }
    else if (c<a && c<b){
        printf("c terkecil\n");
        if (b>a){
            printf("b terbesar\n");
        }else{
            printf("a terbesar\n");
        }
    }
}