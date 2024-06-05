/*Exercício 6. Criação de lista contendo um intervalo
Crie a função intervalo(n), que devolve uma lista com os inteiros consecutivos de 1 até n.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

Lista intervalo(int n, int m) 
{
  Lista L = NULL;
  int tamanho = m;
  while(n<=tamanho)
    {
      L = no(m, L);
      n++;
      m--;
    }
  return L;
}

int main(void) 
{
  int tamanhoLista = 0;
  printf("Digite o tamanho da lista: ");
  scanf("%d" , &tamanhoLista);
  Lista A = intervalo(1, tamanhoLista);
  exibe(A);
  return 0;
}