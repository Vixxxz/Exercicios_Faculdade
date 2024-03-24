/*Exercício 2. Ordenação decrescente e sem repetição
Faça a alteração mínima necessária para que o programa do exercício anterior ordene os números
em ordem decrescente, eliminando números repetidos.*/

//o resultado final ficará em ordem decrescente

#include <stdio.h>
#include "pilha.h"

void main ()
{
	int numeros = 0, quantidade = 0, contador = 0;
	
	printf("quantos numeros pretende inserir?");
	scanf("%d", &quantidade);
	
	int j[quantidade];
	Pilha a = pilha(quantidade);
	Pilha b = pilha(quantidade);

	printf("Digite a sequencia de numeros para serem exibidas de forma decrescente\n");
	
	for (int z = 0; z < quantidade; z++)
	{
		scanf("%d", &numeros);
        empilha(numeros, a);
	}
	
    do
	{
		contador=0;
		empilha(desempilha(a), b);
		while (!vaziap(a))
		{
            if (topo(a) == topo (b)){
                desempilha(a);
            }
			else if (topo(a) > topo(b))
			{
				j[contador] = desempilha(b);
				contador++;
				empilha(desempilha(a), b);
            }
            
			else if(topo(a) < topo (b))
			{
				j[contador] = desempilha(a);
				contador++;
			}
		}
        for (int z = 0; z < contador; z++)
		{
			empilha(j[z], a);
		}
	}while(!cheiap(b) && !vaziap(a));
    while(!vaziap(b))
	{
		empilha(desempilha(b), a);
	}
	
    printf("A sequencia em ordem decrescente e: \n");
	
    while(!vaziap(a))
	{
		printf("%d", desempilha(a));
	}
    
    destroip(&a);
    destroip(&b);
}
