/*Exercício 1. Ordenação crescente
Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números dados
pelo usuário. A ideia é organizar a pilha A de modo que nenhum item seja empilhado sobre outro
menor (use a pilha B apenas para manobra) e, depois, descarregar e exibir os itens da pilha A*/

//Devera ser exibido de forma crescente
//Pilha A no fim ira receber os numeros ordenados de forma decrescente
//Pilha B sera usada para fazer a ordenação

#include <stdio.h>
#include "pilha.h"

void main ()
{
	int n, j[5], i = 0;
	Pilha a = pilha(5);
	Pilha b = pilha(5);
	printf("Digite a sequencia de numeros para serem exibidas de forma crescente\n");
	
	for (int z = 0; z < 5; z++)
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
			if (topo(a) < topo(b) && topo(b) || topo(a) == topo (b))
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
	for(int z = 0; z < 5; z++)
	{
		empilha(desempilha(b), a);
	}
	printf("A sequencia em ordem crescente e: \n");
	while(!vaziap(a))
	{
		printf("%d", desempilha(a));
	}
}