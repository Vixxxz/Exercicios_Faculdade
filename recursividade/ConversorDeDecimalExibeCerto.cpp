#include <iostream>
using namespace std;

int consistir ();
int converte_binario (int);

int main(){
    int n=0; 
    n=consistir();
    cout<<"O numero em binario (impresso na ordem invertida) eh "<<" = "<<converte_binario(n);
    return 0;
}

int consistir(){
    int n=0;
    do {
        cout<<"Declare qual numero sera convertido em binario: ";
        cin>>n;
    }
    while (n <= 0);
    
    return (n);
}

int converte_binario (int decimal){
    int resto = 0;
    if (decimal==0){
        return 0;
    }
    else{
        return decimal % 2 + 10 * (converte_binario(decimal / 2));
    }
}