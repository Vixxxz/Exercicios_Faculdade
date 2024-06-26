/*Exercício 4. Soma dos itens da lista
Adicione no programa do exercício anterior uma função para calcular a soma dos itens da lista.
Por exemplo, considerando que I aponta a lista de inteiros [3,1,5], a chamada soma(I) deve devolver a resposta 9.*/

//Complete e execute o programa a seguir.

#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no 
{
  Item item;
  struct no *prox;
} *Lista;

Lista no(Item x, Lista p) 
{
  Lista n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = p;
  return n;
} 

void exibe(Lista L) 
{
  printf("[");
  while(L != NULL)
  {
    printf("%d",L->item);
    if(L->prox != NULL)
    {
      printf(",");
    }
    else
    {
      printf("]");
    }
    L = L->prox;
  }
}

int tamanho(Lista L) 
{
  int t = 0;
  while( L ) 
  {
    t++;
    L = L->prox;
  }
  return t;
}

int soma (Lista L)
{
  int soma = 0;
  while(L)
  {
    soma = soma + L->item;
    L = L->prox;
  }
  return soma;
}

int main(void) 
{
  Lista I = no(3,no(1,no(5,NULL)));
  exibe(I);
  printf("\nTamanho = %d\n",tamanho(I));
  printf("a soma dos valores da lista e: %d\n", soma(I));
  return 0;
}