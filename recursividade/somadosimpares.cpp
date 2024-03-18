//Mostrar a soma dos impares que são multiplos de 3 de 0 até o número informado

#include <iostream>

using namespace std;

int consistir ();
int somadosimpares (int);

int main(){
    int numeroInformado=0; 
    numeroInformado=consistir();
    cout<<somadosimpares(numeroInformado);
}

int consistir(){
    int numInf=0;
    do {
        cout<<"declare o numero para ser somado";
        cin>>numInf;
    }
    while (numInf < 0);
}

int somadosimpares (int numInf){
    if (numInf==0){
        return 0;
    }
    else{
        if(numInf%2!=0&&numInf%3==0){
            return numInf+somadosimpares(numInf-1);
        }
        else{
            somadosimpares(numInf-1);
        }
    }
}