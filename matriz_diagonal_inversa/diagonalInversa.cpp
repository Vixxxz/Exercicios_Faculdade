#include <iostream>

using namespace std;

int main()
{
    int l=0, c=0, i=0;
    int matrizA[3][3];
    int vetorB[3];
    for(l=0; l<=2; l++){
        for(c=0; c<=2; c++){
            cout<<"declare o valor da matriz";
            cin>>matrizA[l][c];
        }
    }
    for(i=0; i<=2;i++){
        vetorB[i]=matrizA[i][2-i];
    }
    for(l=0; l<=2; l++){
        for(c=0; c<=2; c++){
            cout<<matrizA[l][c];
        }
        cout<<"\n"; 
    }
    cout<<"\n";
    for(i=0; i<=2; i++){
        cout<<vetorB[i];
    }
    return 0;
}
