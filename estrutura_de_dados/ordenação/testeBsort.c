/*Exercício 1. Teste da função bsort()
Crie a função exibe(), complete e execute o programa a seguir.*/

#include <stdio.h>

void troca(int v[], int i, int j) 
{
	int x = v[i];
	v[i] = v[j];
	v[j] = x;
}

void bsort(int v[], int n) 
{
	for(int i=1; i<n; i++)
    {
		for(int j=0; j<n-i; j++)
        {
			if(v[j]>v[j+1])
            {
				troca(v,j,j+1);
            }
        }
    }
}

void exibe (int v[], int i)
{
	for(int j = 0; j < i; j++)
    {
		printf("%d ", v[j]);
	}
}


int main(void) 
{
	int v[10] = {83,31,91,46,27,20,96,25,96,80};
	bsort(v,10);
	exibe(v,10);
	return 0;
}
