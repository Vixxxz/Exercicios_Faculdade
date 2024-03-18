#include <iostream>

using namespace std;

int padovan (int);
int consistir ();

int main (){
    int num=0, contador=4;
    num=consistir();
    cout<<"1, 1, 1";
    for (contador; contador<=num; contador ++){
        padovan(contador);
    }
}

int consistir (){
    int num=0;
    do{
        cout<<"declare num";
        cin>>num;
    }
    while (num < 4);
    return num;
}

int padovan(int a){
    if (a<=2){
        return 1;
    }
    else{
        return (padovan(a-2) + padovan(a-3));
    }
}