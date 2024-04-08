/*Exercício 2. A função empurra()
Crie a função recursiva empurra(v,u), que “empurra” um item máximo do vetor v para a
posição u de v, possivelmente alterando a ordem dos demais itens do vetor. Por exemplo, o
código abaixo deve produzir a saída indicada a seguir:*/


#include <stdio.h>

void empurra(int v[], int posicaoDestino)
{
  int numeroMaior = 0, indiceMaior = 0;
	for(int i = 0; i<posicaoDestino; i++)
	{
	    if(v[i]>numeroMaior)
	    {
	        indiceMaior = i;
	        numeroMaior = v[i];
	    }
	}
	
	for(int i = indiceMaior; i<posicaoDestino; i++)
	{
	    v[i] = v[i+1];
	}
	
	v[posicaoDestino] = numeroMaior;

}

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

void exibe(int v[], int i)
{
	for(int j = 0; j < i; j++)
	{
	    if(j==i-1)
	    {
	       printf("%d ", v[j]); 
	    }
	    else
	    {
		   printf("%d, ", v[j]);
	    }
	}
}


int main(void) 
{
	int v[9] = {51,82,38,99,75,19,69,46,27};
    empurra(v,8);
    exibe(v,9);
	return 0;
}

