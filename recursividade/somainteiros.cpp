//Mostrar a soma dos inteiros de 0 até o número informado

#include <iostream>

using namespace std;

int consistir ();
int somadosinteiros (int);

int main(){
    int numeroInformado=0; 
    numeroInformado=consistir();
    cout<<somadosinteiros(numeroInformado);
}

int consistir(){
    int numInf=0;
    do {
        cout<<"declare o numero para ser somado";
        cin>>numInf;
    }
    while (numInf < 0);
}

int somadosinteiros (int numInf){
    if (numInf==0){
        return 0;
    }
    else{
        return numInf+somadosinteiros(numInf-1);
    }
}