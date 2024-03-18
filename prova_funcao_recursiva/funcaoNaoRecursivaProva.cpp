#include <iostream>

using namespace std;
int x (int);

int main (){
    int numCalc=0;
    cout<<"questao da prova de funcao nao recursiva";
    cout<<"declare o numero a ser calculado";
    cin>>numCalc;
    cout<<x(numCalc);
}

int x (int x){
    int soma=0;
    while(x>0){
        soma+=x;
        x-=1;
    }
    return(-soma);
}