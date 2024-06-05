/*Exercício 1. Programa para inserção em lista ordenada
Complete e execute o programa a seguir.*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no 
{
  Item item;
  struct no *prox;
} * Lista;

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
  while (L != NULL) {
    printf("%d", L->item);
    if (L->prox != NULL) {
      printf(",");
    } else {
      printf("]\n");
    }
    L = L->prox;
  }
}

void ins(Item x, Lista *L) 
{
  while (*L != NULL && (*L)->item < x)
  {
    L = &(*L)->prox;
  }
  *L = no(x, *L);
}

int main(void) 
{
  Lista I = NULL;
  ins(4, &I);
  ins(1, &I);
  ins(3, &I);
  ins(5, &I);
  ins(2, &I);
  exibe(I);
  return 0;
}