//Criar um vetor de 10 elementos e uma matriz de 10 linhas por 10 colunas
//solicitar para o usuário digitar valores no intervalo de 1 a 10 e inserir no vetor, 
//após a inserção no vetor, ler o vetor e para cada elemento lido calcular a tabuada e inserir na matriz.
//Ao final mostrar o elemento do vetor e a tabuada correspondente que esta na matriz


#include <iostream>

using namespace std;

int main(){
    int vetorA[10];
    int matrizA[10][10];
    int l=0, c=0, i=0;

    for(l=0; l<=9; l++){
        cout<<"Declare os valores do vetor";
        cin>>vetorA[l];
    }
    for(l=0;l<=9;l++){
        for(c=0;c<=9;c++){
        }
    }
    for(l=0;l<=9;l++){
        for(c=0;c<=9;c++){
            cout<<matrizA[l][c];
        }
    }
}