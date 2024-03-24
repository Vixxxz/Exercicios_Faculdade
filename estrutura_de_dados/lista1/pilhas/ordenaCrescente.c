#include <stdio.h>
#include "pilha.h"

void main ()
{
	int n = 0, quantidade = 0, i = 0;
	
	printf("quantos numeros pretende inserir?");
	scanf("%d", &quantidade);
	
	int j[quantidade];
	Pilha a = pilha(quantidade);
	Pilha b = pilha(quantidade);

	printf("Digite a sequencia de numeros para serem exibidas de forma crescente\n");
	
	for (int z = 0; z < quantidade; z++)
	{
		scanf("%d", &n);
		empilha(n, a);
	}
	do
	{
		i=0;
		empilha(desempilha(a), b);
		while (!vaziap(a))
		{
			if (topo(a) < topo(b) || topo(a) == topo (b))
			{
				j[i] = desempilha(b);
				i++;
				empilha(desempilha(a), b);
			}
			else if(topo(a) > topo (b))
			{
				j[i] = desempilha(a);
				i++;
			}
		}
		for (int z = 0; z < i; z++)
		{
			empilha(j[z], a);
		}
	}while(!cheiap(b));
	for(int z = 0; z < quantidade; z++)
	{
		empilha(desempilha(b), a);
	}
	printf("A sequencia em ordem crescente e: \n");
	while(!vaziap(a))
	{
		printf("%d", desempilha(a));
	}
	destroip(&a);
    destroip(&b);
}