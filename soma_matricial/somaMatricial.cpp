//Criar  uma matriz A de mesma dimensão que B ( 3 x 3) do tipo inteiro. 
//Efetuar a soma matricial A + B e armazenar o resultado na matriz C.

#include <iostream>

using namespace std;

int main()
{
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];
    int l=0, c=0;

    for (l=0; l<=2; l++){
        for (c=0; c<=2; c++){
            cout<<"declare os valores da matriz A \n";
            cin>>matrizA[l][c];
        }
    }
    for (l=0; l<=2; l++){
        for (c=0; c<=2; c++){
            cout<<"declare os valores da matriz B \n";
            cin>>matrizB[l][c];
        }
    }
    for (l=0; l<=2; l++){
        for (c=0; c<=2; c++){
            matrizC[l][c]=matrizA[l][c]+matrizB[l][c];
            cout<<matrizC[l][c]<<" ";
        }
        cout<<"\n";
    }
}