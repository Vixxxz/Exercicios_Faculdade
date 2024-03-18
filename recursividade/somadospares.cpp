//Mostrar a soma dos pares de 0 até o número informado

#include <iostream>

using namespace std;

int consistir ();
int somadospares (int);

int main(){
    int numeroInformado=0; 
    numeroInformado=consistir();
    cout<<somadospares(numeroInformado);
}

int consistir(){
    int numInf=0;
    do {
        cout<<"declare o numero para ser somado";
        cin>>numInf;
    }
    while (numInf < 0);
}

int somadospares (int numInf){
    int aux;
    if (numInf==0){
        return 0;
    }
    else{
        if(numInf%2==0){
            return numInf+somadospares(numInf-1);
        }
        else{
            somadospares(numInf-1);
        }
    }
}