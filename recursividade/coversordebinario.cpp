//Defina um programa recursivo para, dado um número n, imprimi-lo em base binária.

#include <iostream>

using namespace std;

int conversor(int);

int main(){
    int decimal=0;
    int vetorA[1];
    int i=0;
    cout<<"declare o valor para ser convertido em binario";
    cin>>decimal;
    conversor(decimal);
}

int conversor (int a){
    if (a==0){
        return 0;
    }
    else {
        cout<<a%2;
        return conversor(a/2);
    }
}