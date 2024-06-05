// Exercício 7. Programa para anexação Complete e execute o programa a seguir.
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

void anexa(Lista *A, Lista B) 
{
  if (!B)
  {
    return;
  }
  while (*A)
  {
    A = &(*A)->prox;
  }
  *A = B;
}

int main(void) 
{
  Lista H = no(4, no(2, NULL));
  Lista I = no(3, no(1, no(5, NULL)));
  printf("H = ");
  exibe(H);
  printf("\nI = ");
  exibe(I);
  printf("\nPressione enter para inserir os elementos de I em H");
  getchar();
  anexa(&H, I);
  printf("\nH = ");
  exibe(H);
  printf("\nI = ");
  exibe(I);
  return 0;
}