#include <cstdlib>
#include <iostream>

using namespace std;

int consistir();
int fibonacci(int);

int main (int argc, char *argv[])
{
    int termo=0;
    cout<<"fibonacci \n";
    
    termo=consistir();
    cout<<fibonacci(termo);
    system("PAUSE");
    return EXIT_SUCCESS;
}

int consistir() {
    int qtdSeries=0;
    do{
        cout<<"declare o termo da sequencia de fibonacci";
        cin>>qtdSeries;
    }
    while(qtdSeries<=0||qtdSeries>=10);
}

int fibonacci (int termo){
    if(termo<=1){
        return termo;
    }
    else{
        return fibonacci(termo-1) + fibonacci(termo-2);
    }
}